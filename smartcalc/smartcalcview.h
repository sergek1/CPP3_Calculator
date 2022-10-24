#ifndef SMARTCALCVIEW_H
#define SMARTCALCVIEW_H
#include <QMainWindow>

#include "plotview.h"
#include "smartcalccontroller.h"
#if __APPLE__
#define point '.'
#else
#define point ','
#endif

namespace Ui {
class SmartCalcView;
}

namespace s21 {

class SmartCalcView : public QMainWindow {
    Q_OBJECT

public:
    explicit SmartCalcView(SmartCalcController *controller, QWidget *parent = nullptr);
    ~SmartCalcView();

private slots:
    void DigitPressed();
    void NullPressed();
    void PointPressed();
    void SignPressed();
    void LeftBracketsPressed();
    void RightBracketsPressed();
    void FunctionPressed();
    void CleanPressed();
    void GetResult();
    void WhatPressed();
    void DrawGraph();
    void XPressed();
    void on_CalculateCredit_clicked();

private:
    Plot *m_customPlot;
    Ui::SmartCalcView *ui;
    s21::SmartCalcController *controller_;
    QString output_ = "0";
    bool is_digit = true, is_sign = false, is_right_bracket = false, is_left_bracket = false,
         is_point = false, is_minus = false, is_x = false, is_e = false;
    unsigned int left_brackets_count = 0, right_brackets_count = 0;
};

}  // namespace s21

#endif  // SMARTCALCVIEW_H
