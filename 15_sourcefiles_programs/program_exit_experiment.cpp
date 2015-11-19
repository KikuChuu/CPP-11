#include <iostream>

using namespace std;

void f1()
{
  exit(0);
}

void f2()
{
  abort();
}

void f3()
{
  quick_exit(0);
}

void div_by_zero_crash() noexcept
{
  double d = 1.0;
  d/0;
}

int main()
{
  cout << "Program execution start\n";
//  f1();
//  f2();
//  f3();
  div_by_zero_crash();
  cout << "Program execution end\n";
}
