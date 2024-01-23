#include <iostream>

using namespace std;

float calculate(float num1, float num2, char op) {
  return (op == '+')   ? num1 + num2
         : (op == '-') ? num1 - num2
         : (op == '*') ? num1 * num2
         : (op == '/') ? num1 / num2
                       : -1;
}

int main() {
  float num1, num2, result;
  char op;

  cout << "Type first number: ";
  cin >> num1;
  cout << "Type second number: ";
  cin >> num2;
  cout << "Operator [+ - * /]: ";
  cin >> op;

  result = calculate(num1, num2, op);

  if (result != -1)
    cout << "Result: " << result << endl;
  else
    cout << "Invalid operator" << endl;

  return 0;
}
