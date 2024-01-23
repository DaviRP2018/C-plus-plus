#include <iostream>

using namespace std;

int main() {
  int var;
  cout << var << endl;

  float n1, n2, result;
  n1 = 10;
  n2 = 20;
  result = n1 + n2;
  cout << "result: " << result << endl;

  cout << "n1 - n2 = " << n1 - n2 << endl;
  cout << "n1 * n2 = " << n1 * n2 << endl;
  cout << "n1 / n2 = " << n1 / n2 << endl;

  cout << "(int)n1 % (int)n2 = " << (int)n1 % (int)n2 << endl;

  n1++;
  n2--;

  cout << "n1++ = " << n1 << endl;
  cout << "n2-- = " << n2 << endl;

  n1 += 2;
  n2 *= 10;
  n1 /= 10;

  cout << n1 << endl;
  cout << n2 << endl;

  return 0;
}
