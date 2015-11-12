#include <iostream>

void f()
{
  int x;
  std::cout << "int: " << sizeof(x) << '\n';
}

int main()
{
  f();
}
