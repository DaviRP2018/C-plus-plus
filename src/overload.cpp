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

int main(int argc, char *argv[]) {
  Calculator calc;

  cout << "Sum of 5 and 7: " << calc.add(5, 7) << endl;
  cout << "Sum of 2, 4 and 6: " << calc.add(2, 4, 6) << endl;
  cout << "Sum of 3.5 and 2.5: " << calc.add(3.5, 2.5) << endl;

  Shape shape;

  // Rectangle
  cout << "Area of rectangle: " << Shape::calculateArea(4.0, 5.0) << endl;

  // Circle
  cout << "Area of circle: " << shape.calculateArea(3.0) << endl;

  // Triangle
  cout << "Area of triangle: " << shape.calculateArea(6.0, 8.0, true) << endl;

  // Invalid shape (will print an error message)
  cout << "Area of invalid shape: " << shape.calculateArea(0.0, 0.0, false)
       << endl;

  return 0;
}
