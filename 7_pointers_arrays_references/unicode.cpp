#include <iostream>

using namespace std;

void f()
{
  int vi[10];
  short vs[10];

  cout << vi << ' ' << &vi[1] << ' ' << &vi[1] - &vi[0] << '\n';
  cout << vs << ' ' << &vs[1] << ' ' << &vs[1] - &vs[0] << '\n';
}

int main()
{
  f();
}
