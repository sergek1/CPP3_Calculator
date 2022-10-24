#include "plotview.h"

#include "ui_plotview.h"

using s21::Plot;

Plot::Plot(QWidget *parent, QString str) : QDialog(parent), ui(new Ui::Plot) {
    ui->setupUi(this);
    string_ = str;
    BuildGraph();
}

void Plot::BuildGraph() {
    ui->equation->setText(string_);
    if (xBegin_ >= xEnd_) {
        ui->message->setText("Xmax must be greater than Xmin");
    } else if (yBegin_ >= yEnd_) {
        ui->message->setText("Ymax must be greater than Ymin");
    } else {
        ui->equation->setText(string_);
        ui->graph->xAxis->setRange(xBegin_, xEnd_);
        ui->graph->yAxis->setRange(yBegin_, yEnd_);
        SmartCalcController graph_data(xBegin_, xEnd_, string_);
        graph_points_ = graph_data.GetGraphPoints();
        ui->graph->addGraph();
        ui->graph->graph(0)->setLineStyle(QCPGraph::lsNone);
        ui->graph->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 2));
        ui->graph->graph(0)->addData(graph_points_.first, graph_points_.second);
        ui->graph->replot();
        ui->graph->setInteraction(QCP::iRangeZoom, true);
        ui->graph->setInteraction(QCP::iRangeDrag, true);
    }
}

void Plot::on_pushButton_clicked() { BuildGraph(); }

Plot::~Plot() { delete ui; }

void Plot::on_xmin_valueChanged(int arg1) { xBegin_ = arg1; }

void Plot::on_xmax_valueChanged(int arg1) { xEnd_ = arg1; }

void Plot::on_ymin_valueChanged(int arg1) { yBegin_ = arg1; }

void Plot::on_ymax_valueChanged(int arg1) { yEnd_ = arg1; }
