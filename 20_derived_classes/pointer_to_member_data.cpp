#include <iostream>
using namespace std;

struct C {
  const char* val;
  int i;

  void print(int x) { cout << val << x << '\n'; }
  int f1(int);
  void f2();
  C(const char* v) { val = v; }
};

using Pmfi = void (C::*)(int);
using Pm = const char* C::*;

void f(C& z1, C& z2)
{
  C* p = &z2;
  Pmfi pf = &C::print;
  Pm pm = &C::val;

  z1.print(1);
  (z1.*pf)(2);
  z1.*pm = "nv1";
  p->*pm = "nv2";
  z2.print(3);
  (p->*pf)(4);
}

int main()
{
  C c1{"hello"};
  C c2{"world"};
  f(c1,c2);
}
