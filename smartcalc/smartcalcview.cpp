#include "smartcalcview.h"

#include "ui_smartcalcview.h"

using s21::SmartCalcView;
SmartCalcView::SmartCalcView(s21::SmartCalcController *controller, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::SmartCalcView), controller_(controller) {
    ui->setupUi(this);
    ui->label->setText(output_);
    if (output_.size() < 256) {
        connect(ui->button_0, SIGNAL(clicked()), this, SLOT(NullPressed()));
        connect(ui->button_1, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_2, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_3, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_4, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_5, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_6, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_7, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_8, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_9, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_exp, SIGNAL(clicked()), this, SLOT(DigitPressed()));
        connect(ui->button_plus, SIGNAL(clicked()), this, SLOT(SignPressed()));
        connect(ui->button_minus, SIGNAL(clicked()), this, SLOT(SignPressed()));
        connect(ui->button_divide, SIGNAL(clicked()), this, SLOT(SignPressed()));
        connect(ui->button_mod, SIGNAL(clicked()), this, SLOT(SignPressed()));
        connect(ui->button_multiply, SIGNAL(clicked()), this, SLOT(SignPressed()));
        connect(ui->button_pow, SIGNAL(clicked()), this, SLOT(SignPressed()));
        connect(ui->button_acos, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_asin, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_atan, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_cos, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_sin, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_tan, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_sqrt, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_ln, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_log, SIGNAL(clicked()), this, SLOT(FunctionPressed()));
        connect(ui->button_point, SIGNAL(clicked()), this, SLOT(PointPressed()));
        connect(ui->button_open_brace, SIGNAL(clicked()), this, SLOT(LeftBracketsPressed()));
        connect(ui->button_close_brace, SIGNAL(clicked()), this, SLOT(RightBracketsPressed()));
        connect(ui->button_x, SIGNAL(clicked()), this, SLOT(XPressed()));
    }
    connect(ui->button_equal, SIGNAL(clicked()), this, SLOT(GetResult()));
    connect(ui->button_graph, SIGNAL(clicked()), this, SLOT(DrawGraph()));
    connect(ui->button_clean_one, SIGNAL(clicked()), this, SLOT(CleanPressed()));
    connect(ui->button_clean_all, SIGNAL(clicked()), this, SLOT(CleanPressed()));
    ui->credit_amount->setValidator(new QDoubleValidator(0, 1, 2, this));
    ui->lineEdit->setValidator(new QDoubleValidator(-1, 1, 7, this));
}

SmartCalcView::~SmartCalcView() { delete ui; }

void SmartCalcView::XPressed() {
    if (output_ == "0" || output_ == "nan" || output_ == "inf" || output_ == "-inf") output_.clear();
    if ((is_digit || is_right_bracket || is_x || is_point) && output_.size() != 0 && !is_sign &&
        !is_left_bracket)
        output_ += '*';
    output_ += 'x';
    is_digit = is_sign = is_right_bracket = is_left_bracket = is_point = false;
    is_x = true;
    ui->label->setText(output_);
}

void SmartCalcView::DrawGraph() {
    qsizetype size = output_.size();
    if (size && !is_sign && !is_left_bracket && output_.mid(size - 1, 1) != '-') {
        for (unsigned int i = right_brackets_count; i < left_brackets_count; i++) {
            output_ += ")";
            is_right_bracket = true;
        }
        right_brackets_count += (left_brackets_count - right_brackets_count);
        ui->label->setText(output_);
        m_customPlot = new Plot(nullptr, output_);
        m_customPlot->show();
    }
}

void SmartCalcView::GetResult() {
    qsizetype size = output_.size();
    if (size && !is_sign && !is_left_bracket && output_[size - 1] != '-') {
        for (unsigned int i = 0; i < left_brackets_count - right_brackets_count; i++) output_ += ")";
        double res;
        if (output_.contains('x')) {
            QString x_value = ui->lineEdit->text();
            for (auto &i : x_value) {
                if (i == ',') i = point;
            }
            double x = x_value.toDouble();
            res = controller_->GetResult(output_, x);
        } else {
            res = controller_->GetResult(output_);
        }
        output_.clear();
        output_ = QString::number(res, 'g', 9);
        for (auto &i : output_) {
            if (i == '.') i = point;
        }
        ui->label->setText(output_);
        WhatPressed();
        is_point = output_.contains(point);
        is_e = output_.contains('e');
        left_brackets_count = right_brackets_count = 0;
    }
}

void SmartCalcView::CleanPressed() {
    if (((QPushButton *)sender())->text() == "Clear All") {
        output_.clear();
        ui->label->setText(output_);
        left_brackets_count = right_brackets_count = 0;
    } else {
        qsizetype size = output_.size();
        QString str1 = "sqrtacosasinatan", str2 = "cossintanlog", str3 = "modinfnan";
        if (str1.contains(output_.mid(size - 5, 4)) && size > 4) {
            output_ = output_.left(size - 5);
            is_left_bracket = false;
            left_brackets_count -= 1;
        } else if (str2.contains(output_.mid(size - 4, 3)) && size > 3) {
            output_ = output_.left(size - 4);
            is_left_bracket = false;
            left_brackets_count -= 1;
        } else if (output_.mid(size - 3, 3) == "ln(") {
            output_ = output_.left(size - 3);
            is_left_bracket = false;
            left_brackets_count -= 1;
        } else if (output_.mid(size - 4, 4) == "-inf") {
            output_ = output_.left(size - 4);
        } else if (str3.contains(output_.mid(size - 3, 3))) {
            output_ = output_.left(size - 3);
        } else {
            if (output_.mid(size - 1, 1) == '(')
                left_brackets_count -= 1;
            else if (output_[size - 1] == ')') {
                right_brackets_count -= 1;
            }
            output_ = output_.left(size - 1);
        }
        ui->label->setText(output_);
    }
    WhatPressed();
}

void SmartCalcView::WhatPressed() {
    qsizetype size = output_.size();
    is_digit = is_sign = is_point = is_right_bracket = is_left_bracket = is_minus = is_x = is_e = false;
    if (size > 0) {
        if (output_[size - 1].isDigit()) {
            is_digit = true;
        } else if (output_[size - 1] == '(') {
            is_left_bracket = true;
        } else if (output_[size - 1] == ')') {
            is_right_bracket = true;
        } else if (output_[size - 1] == point) {
            is_point = true;
        } else if (output_[size - 1] == 'x') {
            is_x = true;
        } else if (output_[size - 1] == 'e') {
            is_e = true;
        } else if (output_.mid(size - 1) == '-') {
            QString signs = "*/m";
            if (signs.contains(output_.mid(size - 2))) is_minus = true;
        } else {
            is_sign = true;
        }
    }
}

void SmartCalcView::DigitPressed() {
    QString text = ((QPushButton *)sender())->text();
    qsizetype size = output_.size();
    if (text == "e") {
        if (!is_e && !is_sign && output_.mid(size - 1, 1) != 'e' && is_digit) {
            output_ += text;
            ui->label->setText(output_);
            is_sign = is_e = true;
            is_digit = false;
        }
    } else {
        if (output_.mid(size - 1, 1) == '0' &&
            !(output_.mid(size - 2, 1) >= '0' && output_.mid(size - 2, 1) <= '9'))
            output_ = output_.left(size - 1);
        if (output_ == "0" || output_ == "nan" || output_ == "inf" || output_ == "-inf") {
            output_.clear();
            output_ += text;
            ui->label->setText(output_);
        } else {
            if (is_x || is_right_bracket) output_ += '*';
            if (output_.mid(size - 1, 1) == '-' && output_.mid(size - 2, 2) == 'e') is_e = true;
            output_ += text;
            ui->label->setText(output_);
        }
        is_digit = true;
        is_minus = is_left_bracket = is_right_bracket = is_x = is_sign = false;
    }
}

void SmartCalcView::NullPressed() {
    QString text = ((QPushButton *)sender())->text();
    qsizetype size = output_.size();
    if (is_right_bracket || is_x) {
        output_ += "*";
        is_right_bracket = is_x = false;
    }
    if (!(output_.mid(size - 1, 1) == '0' && output_.mid(size - 2, 1) != point &&
          !(output_.mid(size - 2, 1) >= '0' && output_.mid(size - 2, 1) <= '9')))
        output_ += text;
    is_sign = false;
    is_digit = true;
    ui->label->setText(output_);
}

void SmartCalcView::PointPressed() {
    qsizetype size = (output_.size() != 0) ? (output_.size() - 1) : 0;
    is_point = false;
    while (size != 0 && ((output_[size].isDigit()) || output_[size] == point)) {
        if (output_[size] == point) is_point = true;
        size--;
    }
    if (is_digit && !is_point && !is_right_bracket) {
        is_point = true;
        output_ += point;
        ui->label->setText(output_);
    }
}

void SmartCalcView::SignPressed() {
    if (output_ != "nan" && output_ != "inf" && output_ != "-inf") {
        QString text = ((QPushButton *)sender())->text();
        qsizetype size = output_.size();
        if (is_digit || is_right_bracket || is_x) {
            if (output_[size - 1] != 'e') {
                output_ += text;
                ui->label->setText(output_);
            }
            is_sign = true;
            is_right_bracket = is_x = false;
        } else if ((is_left_bracket || output_.isEmpty()) && text == "-") {
            output_ += text;
            ui->label->setText(output_);
        } else if ((is_e || is_sign) && !is_minus) {
            if (text == "-") {
                if ((output_[size - 1] == '*' || output_[size - 1] == '/' || output_[size - 1] == 'd' ||
                     output_[size - 1] == 'e') &&
                    output_[size - 1] != '^')
                    is_minus = true;
                else
                    output_ = output_.left(size - 1);
                output_ += text;
                ui->label->setText(output_);
            } else {
                if (output_[size - 1] == 'd')
                    output_ = output_.left(size - 3);
                else
                    output_ = output_.left(size - 1);
                output_ += text;
                ui->label->setText(output_);
            }
        }
        is_point = is_left_bracket = is_digit = is_e = false;
    }
}

void SmartCalcView::LeftBracketsPressed() {
    auto *button = (QPushButton *)sender();
    if (output_ == "0" || output_ == "nan" || output_ == "inf" || output_ == "-inf") output_.clear();
    qsizetype size = output_.size();
    if (size == 0 || (output_.mid(size - 1, 1) != 'e' && output_.mid(size - 2, 2) != "e-")) {
        if ((is_digit || is_point || is_right_bracket || output_.mid(size - 1, 1) == 'x') && size != 0)
            output_ += '*';
        left_brackets_count++;
        output_ += button->text();
        ui->label->setText(output_);
        is_left_bracket = true, is_digit = is_right_bracket = is_sign = is_point = false;
    }
}

void SmartCalcView::RightBracketsPressed() {
    auto *button = (QPushButton *)sender();
    if (left_brackets_count > right_brackets_count) {
        if ((is_digit || is_right_bracket || is_x) && !is_sign) {
            right_brackets_count++;
            output_ += button->text();
            ui->label->setText(output_);
            is_right_bracket = true, is_digit = is_point = is_x = false;
        }
    }
}

void SmartCalcView::FunctionPressed() {
    if (output_ == "0" || output_ == "nan" || output_ == "inf" || output_ == "-inf") output_.clear();
    auto *button = (QPushButton *)sender();
    if (output_.mid(output_.size() - 1, 1) != 'e') {
        if ((is_digit || is_point || is_right_bracket || is_x) && output_.size() != 0) output_ += "*";
        output_ += button->text();
        ui->label->setText(output_);
        left_brackets_count++;
        is_left_bracket = true, is_point = is_digit = is_right_bracket = is_x = false;
    }
}

void SmartCalcView::on_CalculateCredit_clicked() {
    QString credit_string = ui->credit_amount->text();
    for (auto &i : credit_string) {
        if (i == ',') i = point;
    }
    double credit_amount = credit_string.toDouble(), interest_rate = ui->interest_rate->value();
    int months = (ui->time_type->currentIndex() == 0) ? ui->year->value() * 12 : ui->year->value();
    int credit_type = ui->credit_type->currentIndex();
    SmartCalcController controller(credit_amount, months, interest_rate, credit_type);
    ui->month_payment->setText(controller.GetMonthPayment());
    ui->overpayment->setText(controller.GetOverpayment());
    ui->total_payment->setText(controller.GetTotalPayment());
}
