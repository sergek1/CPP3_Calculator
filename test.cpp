#include <gtest/gtest.h>

#include "smartcalc/smartcalcmodel.h"

#if __APPLE__
#define point 1
#else
#define point 0
#endif
TEST(Calculator, case_1) {
    double result = 10 + 5;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10+5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_2) {
    double result = 10.5 + 5;
    s21::SmartCalcModel testCalc;
    double my_result;
    my_result = point ? testCalc.GetCalcResult("10.5+5") : testCalc.GetCalcResult("10,5+5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_3) {
    double result = 10 - 5;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10-5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_4) {
    double result = 10 * 5;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10*5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_5) {
    double result = 10 * -5;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10*-5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_6) {
    double result = -10.9 * -5;
    s21::SmartCalcModel testCalc;
    double my_result;
    my_result = point ? testCalc.GetCalcResult("-10.9*-5") : testCalc.GetCalcResult("-10,9*-5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_7) {
    double result = 10 / 5;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10/5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_8) {
    double result = 10 % 5;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10m5");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_9) {
    double result = 42 % 73;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("42m73");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_10) {
    double result = pow(3, 2);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("3^2");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_11) {
    double result = 42 % 73;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("42m73");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_12) {
    double result = 10e-2 / 10;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("10e-2/10");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_13) {
    double result = sqrt(19);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("h(19)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_14) {
    double result = log(19);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("j(19)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_15) {
    double result = log10(19);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("k(19)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_16) {
    double result = cos(1);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("a(1)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_17) {
    double result = sin(19);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("b(19)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_18) {
    double result = tan(19);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("c(19)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_19) {
    double result = acos(1);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("d(1)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_20) {
    double result = asin(0);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("f(0)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_21) {
    double result = atan(0);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("g(0)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_22) {
    double result = sqrt(5) + 9 * (-3 + sin(333 - 330) * 6);
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("h(5)+9*(-3+b(333-330)*6)");
    ASSERT_EQ(my_result, result);
}

TEST(Calculator, case_23) {
    double result = 16;
    s21::SmartCalcModel testCalc;
    double my_result = testCalc.GetCalcResult("2^2^2");
    ASSERT_EQ(my_result, result);
}

TEST(Graph, case_1) {
    std::vector<double> X, Y, my_X, my_Y;
    for (double x = -0.01; x <= 0.01; x += 0.005) {
        X.push_back(x);
        Y.push_back(x - 2);
    }
    s21::SmartCalcModel testCalc(-0.01, 0.01, "x-2");
    my_X = testCalc.GetGraphPoints().first, my_Y = testCalc.GetGraphPoints().second;
    ASSERT_EQ(X, my_X);
    ASSERT_EQ(Y, my_Y);
}

TEST(CreditCalc, case_1) {
    double overpayment = 108292, total_payment = 608292;
    std::string month_payment = point ? "10138.20" : "10138,20";
    s21::SmartCalcModel testCalc(500000, 60, 8, 0);
    double my_result = testCalc.GetOverpayment(), my_result_1 = testCalc.GetTotalPayment();
    std::string my_result_2 = testCalc.GetMonthPayment();
    ASSERT_EQ(my_result, overpayment);
    ASSERT_EQ(my_result_1, total_payment);
    ASSERT_EQ(my_result_2, month_payment);
}

TEST(CreditCalc, case_2) {
    double overpayment = 101666.67, total_payment = 601666.67;
    std::string month_payment = point ? "11666.67 ... 8388.89" : "11666,67 ... 8388,89";
    s21::SmartCalcModel testCalc(500000, 60, 8, 1);
    double my_result = testCalc.GetOverpayment(), my_result_1 = testCalc.GetTotalPayment();
    std::string my_result_2 = testCalc.GetMonthPayment();
    ASSERT_EQ(my_result, overpayment);
    ASSERT_EQ(my_result_1, total_payment);
    ASSERT_EQ(my_result_2, month_payment);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}