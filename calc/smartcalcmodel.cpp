#include "smartcalcmodel.h"


double SmartCalcModel::reverse_polish_notation() {
   stack.push(' ');
  for (size_t i = 0; i < input_.size(); ++i) {
    char sym = input_[i];QString signs = "+-*/m^(";
    if (input_[i] == '-' && (signs.contains(input_[i-1]) || i == 0)) {
        stack.push('u');
    } else if (sym >= '0' && sym <= '9') {
      while (std::regex_match(std::string(1,input_[i]).c_str(), std::regex("([\\d.,eE])"))) {
          if((input_[i]=='e' || input_[i]=='E') && input_[i+1] == '-'){
              output += input_[i]; output+=input_[i+1];
              i+=2;
          } else {
              output+= input_[i++];}
      }
      i--; output += ' ';
    } else {
      if (input_[i] == ')') {
        char b = stack.top(); int count_brace = 0;
        while ((b) != '(' && !count_brace) {
          stack.pop();
          output+= b; output+= ' ';
          b = stack.top();
          if (b == ' ')
            count_brace++;
        }
        if (b == '(') {
            stack.pop();
        }
      } else {
          char b = stack.top(); QString signs = "/*m^uabcdfghjk",signs1 = "+-/*m^uabcdfghjk";
          if (sym == '/' || sym == '*' || sym == 'm') {
            while (signs.contains(b)) {
              stack.pop();
              output+= b;output+= ' ';
              b = stack.top();
            }
          } else if (sym == '+' || sym == '-') {
            while (signs1.contains(b)) {
              stack.pop();
              output+= b;output+= ' ';
              b = stack.top();
            }
          } else if (sym == '^') {
            while (b == '^' || b == 'u') {
              stack.pop();
              output += b;output += ' ';
              b = stack.top();
            }
          } else{
              while ( b == 'u') {
                stack.pop();
                output += b;output += ' ';
                b = stack.top();
              }
          }
        stack.push(sym);
      }
    }
  }
  while (stack.size() > 1) {
    char a = stack.top();
    stack.pop();
    output+= a;output+= ' ';
  }
  return convert_i(output);
}

double SmartCalcModel::convert_i(std::string output) {
  QString signs = "+-*/m^";
  stack1.push(0);
  for (unsigned int i = 0; i < output.size()-1; ++i) {
    char sym = output[i];
    if (sym >= '0' && sym <= '9') {
        std::string str;
        while (std::regex_match(std::string(1,output[i]).c_str(), std::regex("([\\d.,eE-])"))) {
          str+= output[i++];
        }
        double number = std::stod(str);
        stack1.push(number);
    } else if (signs.contains(sym)) {
        double a1, b1, c;
        if (stack1.size() > 2) {
          a1 = stack1.top(); stack1.pop();
          b1 = stack1.top(); stack1.pop();
        }
        if (sym == '+') { c = b1 + a1;
        } else if (sym == '-') { c = b1 - a1;
        } else if (sym == '*') { c = b1 * a1;
        } else if (sym == '/') { c = b1 / a1;
        } else if (sym == 'm') { c = std::fmod(b1, a1);
        } else { c = pow(b1, a1); }
        stack1.push(c);
        i++;
    } else {
        double a = stack1.top(), b;
        stack1.pop();
        if (sym == 'a') { b = cos(a);
        } else if (sym == 'b') { b = sin(a);
        } else if (sym == 'c') { b = tan(a);
        } else if (sym == 'd') { b = acos(a);
        } else if (sym == 'f') { b = asin(a);
        } else if (sym == 'g') { b = atan(a);
        } else if (sym == 'h') { b = sqrt(a);
        } else if (sym == 'j') { b = log(a);
        } else if (sym == 'k') { b = log10(a);
        } else if (sym == 'u') { b = -a; }
        stack1.push(b);
      }
  }
  return stack1.top();
}
