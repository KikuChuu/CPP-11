#include "complex.h"
#include <fstream>
using namespace std;

int main()
{
  ofstream output("result", ios::out);
  complex a(100, 50);
  complex b(50, 25);
  complex c1 = a+b;
  complex c2 = a-b;
  complex c3 = a*b;
  complex c4 = a/b;
  complex c5 = -a;
  output << "INPUT A: re=" << a.real() << " and im=" << a.imag() << '\n';
  output << "INPUT B: re=" << b.real() << " and im=" << b.imag() << '\n';
  output << "SUM: re=" << c1.real() << " and im=" << c1.imag() << '\n';
  output << "DIFFERENCE: re=" <<  c2.real() << " and im=" << c2.imag() << '\n';
  output << "PRODUCT: re=" << c3.real() << " and im=" << c3.imag() << '\n';
  output << "QUOTIENT: re=" << c4.real() << " and im=" << c4.imag() << '\n';
  output << "NEGATION: re=" << c5.real() << " and im=" << c5.imag() << '\n';
  output.close();
}
