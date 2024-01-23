/* This module have math functions */
#include <iostream>
#include <valarray>

using namespace std;

class Calculator {
public:
  int add(int num1, int num2) { return num1 + num2; }

  int add(int num1, int num2, int num3) { return num1 + num2 + num3; }

  double add(double num1, double num2) { return num1 + num2; }
};

class Shape {
public:
  // Calculate the area of a rectangle
  static double calculateArea(double length, double width) {
    return length * width;
  }

  // Calculate the area of a circle
  double calculateArea(double radius) { return M_PI * pow(radius, 2); }

  // Calculate the area of a triangle
  double calculateArea(double base, double height, bool isTriangle) {
    if (isTriangle) {
      return 0.5 * base * height;
    } else {
      cerr << "Invalid shape specified." << endl;
      return -1.0; // Indicates an error
    }
  }
};
