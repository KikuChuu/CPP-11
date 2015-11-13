#include <iostream>
using namespace std;

int* f()
{
  int li = 1;
  return &li;
}

void print_int(int* x)
{
  cout << static_cast<int>(*x) << '\n';
}

int main()
{
  int* p = f();
  *p = 100;
  print_int(p);
  f();
  print_int(p);
  int p1 = int{1};
  print_int(&p1);
}
