#ifndef SMARTCALCMODEL_H
#define SMARTCALCMODEL_H

#include <QMainWindow>
#include <regex>
#include <stack>

class SmartCalcModel {
public:

    explicit SmartCalcModel(std::string input): input_(input){};
    double reverse_polish_notation();
    double convert_i(std::string output);
private:
    std::string input_;
    std::stack<char> stack;
    std::string output;
    std::stack<double> stack1;
};

#endif // SMARTCALCMODEL_H
