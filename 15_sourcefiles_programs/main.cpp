#include "inline_function.h"

extern const int x;

void f()
{
  A a;
  a.print();
}

int main()
{
  f();
  std::cout << x << "\n";
}
