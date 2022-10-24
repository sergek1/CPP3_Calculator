#include <QApplication>
#include <clocale>

#include "smartcalcview.h"

int main(int argc, char *argv[]) {
    std::setlocale(LC_ALL, "C");
    QApplication a(argc, argv);
    s21::SmartCalcController controller;
    s21::SmartCalcView w(&controller);
    w.setWindowTitle("SmartCalc V.2");
    w.show();
    return a.exec();
}
