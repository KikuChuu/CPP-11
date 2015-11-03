#include <iostream>

using namespace std;

void f()
{
  int i = 1;
  int* p = i; // this is an error according to gcc
  cout << p << ' ' << *p << '\n';
}

int main()
{
  f();
}
