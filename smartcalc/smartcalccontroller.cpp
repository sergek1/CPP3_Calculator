#include "smartcalccontroller.h"

using s21::SmartCalcController;

SmartCalcController::SmartCalcController(double xBegin, double xEnd, QString string) {
    TransformString(string, true);
    SmartCalcModel graph(xBegin, xEnd, string_);
    std::pair<std::vector<double>, std::vector<double>> graph_points = graph.GetGraphPoints();
    std::vector<double> X = graph_points.first, Y = graph_points.second;
    QVector<double> QX = QVector<double>(X.begin(), X.end()), QY = QVector<double>(Y.begin(), Y.end());
    graph_points_ = std::make_pair(QX, QY);
}

SmartCalcController::SmartCalcController(double credit_amount, int months, double interest_rate,
                                         int credit_type) {
    SmartCalcModel credit(credit_amount, months, interest_rate, credit_type);
    month_payment_ = credit.GetMonthPayment().c_str();
    total_payment_ = credit.GetTotalPayment();
    overpayment_ = credit.GetOverpayment();
}

double SmartCalcController::GetResult(QString string, double x) {
    TransformString(string, false, x);
    SmartCalcModel res1;
    return res1.GetCalcResult(string_);
}

QString SmartCalcController::GetMonthPayment() { return month_payment_; }
QString SmartCalcController::GetTotalPayment() { return QString::number(total_payment_, 'g', 15); }
QString SmartCalcController::GetOverpayment() { return QString::number(overpayment_, 'g', 15); }
std::pair<QVector<double>, QVector<double>> SmartCalcController::GetGraphPoints() { return graph_points_; }

void SmartCalcController::TransformString(QString input, bool is_for_graph, double x) {
    string_.clear();
    for (int i = 0; i < input.size(); ++i) {
        if (input.mid(0 + i, 4) == "acos") {
            string_ += "d(";
            i += 4;
        } else if (input.mid(0 + i, 4) == "asin") {
            string_ += "f(";
            i += 4;
        } else if (input.mid(0 + i, 4) == "atan") {
            string_ += "g(";
            i += 4;
        } else if (input.mid(0 + i, 3) == "cos") {
            string_ += "a(";
            i += 3;
        } else if (input.mid(0 + i, 3) == "sin") {
            string_ += "b(";
            i += 3;
        } else if (input.mid(0 + i, 3) == "tan") {
            string_ += "c(";
            i += 3;
        } else if (input.mid(0 + i, 4) == "sqrt") {
            string_ += "h(";
            i += 4;
        } else if (input.mid(0 + i, 2) == "ln") {
            string_ += "j(";
            i += 2;
        } else if (input.mid(0 + i, 3) == "log") {
            string_ += "k(";
            i += 3;
        } else if (input.mid(0 + i, 3) == "mod") {
            string_ += "m";
            i += 2;
        } else if (input[i] == 'x' && !is_for_graph) {
            string_ += '(';
            string_ += std::to_string(x);
            string_ += ')';
        } else {
            string_ += QString(QChar(input[i])).toStdString();
        }
    }
}
