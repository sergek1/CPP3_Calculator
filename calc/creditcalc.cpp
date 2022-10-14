#include "creditcalc.h"
#include "ui_creditcalc.h"

CreditCalc::CreditCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreditCalc)
{
    ui->setupUi(this);
}

CreditCalc::~CreditCalc()
{
    delete ui;
}
