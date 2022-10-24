#ifndef SMARTCALCCONTROLLER_H
#define SMARTCALCCONTROLLER_H
#include <QMainWindow>

#include "smartcalcmodel.h"

namespace s21 {
class SmartCalcController {
public:
    SmartCalcController(){};
    SmartCalcController(double xBegin, double xEnd, QString string);
    SmartCalcController(double credit_amount, int months, double interest_rate, int credit_type);
    double GetResult(QString string, double x = 0);
    QString GetMonthPayment();
    QString GetTotalPayment();
    QString GetOverpayment();
    std::pair<QVector<double>, QVector<double>> GetGraphPoints();

private:
    std::string string_;
    std::pair<QVector<double>, QVector<double>> graph_points_;
    QString month_payment_;
    double total_payment_, overpayment_;
    void TransformString(QString input, bool is_for_graph, double x = 0);
};
}  // namespace s21
#endif  // SMARTCALCCONTROLLER_H
