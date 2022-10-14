#include "smartcalcview.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartCalcController controller;
    MainWindow w(&controller);
    w.show();
    return a.exec();
}
