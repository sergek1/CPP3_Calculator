#ifndef PLOTVIEW_H
#define PLOTVIEW_H
#include <QDialog>
#include <iostream>
#include <vector>

#include "qcustomplot/qcustomplot.h"
#include "smartcalccontroller.h"
namespace Ui {
class Plot;
}

namespace s21 {
class Plot : public QDialog {
    Q_OBJECT

public:
    explicit Plot(QWidget *parent = nullptr, QString str = "");
    ~Plot();

private slots:
    void on_pushButton_clicked();
    void on_xmin_valueChanged(int arg1);
    void on_xmax_valueChanged(int arg1);
    void on_ymin_valueChanged(int arg1);
    void on_ymax_valueChanged(int arg1);

private:
    Ui::Plot *ui;
    QString string_;
    double xBegin_ = -10, xEnd_ = 10, yBegin_ = -10, yEnd_ = 10;
    std::pair<QVector<double>, QVector<double>> graph_points_;
    void BuildGraph();
};
}  // namespace s21

#endif  // PLOTVIEW_H
