#ifndef MY_MATH_H
#define MY_MATH_H

#include <iostream>
#include <valarray>

using namespace std;

class Calculator {
public:
  int add(int num1, int num2);
  int add(int num1, int num2, int num3);
  double add(double num1, double num2);
};

class Shape {
public:
  static double calculateArea(double length, double width);
  double calculateArea(double radius);
  double calculateArea(double base, double height, bool isTriangle);
};

#endif // MY_MATH_H
