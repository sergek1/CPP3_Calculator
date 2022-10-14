#ifndef SMARTCALCVIEW_H
#define SMARTCALCVIEW_H

#include <QMainWindow>

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <regex>
#include <stack>
#include <qcustomplot.h>
#include "plot.h"
#if __APPLE__
  #define point '.'
#else
  #define point ','
#endif
#include "smartcalccontroller.h"
namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
     MainWindow(SmartCalcController *controller, QWidget *parent = nullptr);
    ~MainWindow();
    QString output_="0", string_for_model_="";
    bool is_digit = true, is_sign = false, is_right_bracket = false, is_left_bracket = false,
    is_point = false, is_minus = false, is_x = false, is_e = false;
    unsigned int left_brackets_count = 0, right_brackets_count = 0;
    friend double reverse_polish_notation(std::string input);
    friend double convert_i(std::string output);

private slots:
    void DigitPressed();
    void NullPressed();
    void PointPressed();
    void SignPressed();
    void LeftBracketsPressed();
    void RightBracketsPressed();
    void FunctionPressed();
    void CleanPressed();
    double GetResult();
    void WhatPressed();
    void TransformString();
    void DrawGraph();
    void XPressed();
    void on_CalculateCredit_clicked();

private:
    Plot * m_customPlot;
    Ui::MainWindow *ui;
    SmartCalcController *controller_;
};

#endif // SMARTCALCVIEW_H
