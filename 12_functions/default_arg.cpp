#include <iostream>
using namespace std;

class X {
public:
  static int def_arg;
  void f(int = def_arg);
};

int X::def_arg = 7;

void X::f(int a)
{
  cout << a*10 << '\n';
}

void g(X& a)
{
  a.f();
}

void f()
{
  X a;
  g(a);
  a.def_arg = 10;
  g(a);
}

int main()
{
  f();
}
