#include <iostream>

void foo(int x)
{
  std::cout << x << '\n';
}

int main()
{
  int in = 0;
  foo( (++in, in += 2, in += 1) );
}
