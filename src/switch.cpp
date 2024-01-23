#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int num = 12;

  switch (num) {
  case 9:
    cout << "num 9";
    break;
  case 10:
    cout << "num 10";
    break;
  default:
    cout << "num not found";
  }

  return 0;
}
