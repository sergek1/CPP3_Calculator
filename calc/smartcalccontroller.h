#ifndef SMARTCALCCONTROLLER_H
#define SMARTCALCCONTROLLER_H
#include "smartcalcmodel.h"


class SmartCalcController
{
public:
    SmartCalcController();

    double getRes(QString string_for_model_){
        SmartCalcModel res1(string_for_model_.toStdString());
        double res = res1.reverse_polish_notation();
        return res;
    }
};

#endif // SMARTCALCCONTROLLER_H
