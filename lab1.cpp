#include <iostream>
#include <math.h>
using std::cout;
using std::endl;

int main() {

  double b, a, y, x, z, v;

  b = sqrt(2) + log(3);
  a = log10(1 + pow(b, 2)) + tan(b);
  y = pow(pow(a, 2) + pow(b, 2), 1.0 / 3.0);
  x = exp(a * y) + exp(b * y);
  z = (1 + log(a * x)) / (1 + log(b * y));
  v = sin(x) * sin(y) * sin(z) - cos(x + y + z);

  cout << "v = " << v << endl
    << "z = " << z << endl
    << "x = " << x << endl
    << "y = " << y << endl
    << "a = " << a << endl
    << "b = " << b << endl;

  return 0;
}