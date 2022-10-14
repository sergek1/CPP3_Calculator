#ifndef PLOT_H
#define PLOT_H

#include <QDialog>
#include <iostream>

namespace Ui {
class Plot;
}

class Plot : public QDialog
{
    Q_OBJECT

public:
    friend double reverse_polish_notation(std::string input);
    friend double convert_i(std::string output);
//    void CheckPriority(char sym);
    explicit Plot(QWidget *parent = nullptr,QString str2="");
    ~Plot();

private slots:
    void on_pushButton_clicked();
    void on_xmin_valueChanged(int arg1);
    void on_xmax_valueChanged(int arg1);
    void on_ymin_valueChanged(int arg1);
    void on_ymax_valueChanged(int arg1);

private:
    Ui::Plot *ui;
    void BuildGraph();
    int xBegin = -10, xEnd = 10, yBegin = -10, yEnd = 10;
    double step = 0.001;
    int N;
    std::string str1;
    QVector<double> X,Y;
};

#endif // PLOT_H
