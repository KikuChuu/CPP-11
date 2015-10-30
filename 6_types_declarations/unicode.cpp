#include <iostream>

void f()
{
  std::cout << u'\xDEAD' << '\n';
}

int main()
{
  f();
}
