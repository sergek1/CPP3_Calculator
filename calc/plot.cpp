#include "plot.h"
#include "mainwindow.h"
#include "ui_plot.h"
#include <string>
#include <cmath>
#include "smartcalcmodel.h"
Plot::Plot(QWidget *parent, QString str) :
    QDialog(parent),
    ui(new Ui::Plot)
{
    ui->setupUi(this);
    str1 = str.toStdString();
    BuildGraph();
}

void Plot::BuildGraph() {
    if (xBegin>=xEnd) {
        ui->message->setText("Xmax must be greater than Xmin");
    } else if (yBegin>=yEnd) {
        ui->message->setText("Ymax must be greater than Ymin");
    } else {
        ui->graph->xAxis->setRange(xBegin,xEnd); ui->graph->yAxis->setRange(yBegin,yEnd);
        if (xEnd - xBegin > 40 && xEnd - xBegin <= 100)
            step=0.01;
        else if (xEnd - xBegin > 100)
            step=0.1;
        for (double x = xBegin; x <= xEnd; x+=	step) {
            QString expression;
            for (size_t i = 0; i < str1.size(); ++i) {
                if (str1[i]=='x') {
                    expression += QString::number(x, 'g', 12);} else {
                    expression += str1[i];}
            }
            SmartCalcModel y(expression.toStdString());
            X.push_back(x); Y.push_back(y.reverse_polish_notation());
        }
        ui->graph->addGraph();
        ui->graph->graph(0)->setLineStyle(QCPGraph::lsNone);
        ui->graph->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 2));
        ui->graph->graph(0)->addData(X,Y);
        ui->graph->replot();
        ui->graph->setInteraction(QCP::iRangeZoom, true);
        ui->graph->setInteraction(QCP::iRangeDrag, true);
    }
}

void Plot::on_pushButton_clicked() { BuildGraph(); }

Plot::~Plot() { delete ui; }



void Plot::on_xmin_valueChanged(int arg1) { xBegin = arg1; }

void Plot::on_xmax_valueChanged(int arg1) { xEnd = arg1; }

void Plot::on_ymin_valueChanged(int arg1) { yBegin = arg1; }

void Plot::on_ymax_valueChanged(int arg1) { yEnd = arg1; }

