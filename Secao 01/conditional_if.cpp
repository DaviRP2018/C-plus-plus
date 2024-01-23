#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  float money = 1000000000000000;

  if (money > 10)
    cout << "I'll go eat";
  else if (money == 10)
    cout << "arrr";
  else if (money >= 10)
    cout << "arrr";
  else if (money <= 10) {
  } else if (money < 10) {
  } else
    cout << "trash";

  if (money == 10 && true) {
    cout << "arrrr";
  }

  if (money == 10 || true) {
    cout << "arrrr";
  }

  if (money == 10 not_eq true) {
    cout << "arrrr";
  }

  if (!(money == 10)) {
    cout << "arrrr";
  }

  if (money != 10) {
    cout << "arrrr";
  }

  return 0;
}
