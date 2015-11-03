#include <iostream>

using namespace std;

void f()
{
  int a = 1;
  const int c = 2;
  const int* p1 = &c;
  const int* p2 = &a;
  int* p3 = &c;
  *p3 = 7;
}

int main()
{
  f();
}
