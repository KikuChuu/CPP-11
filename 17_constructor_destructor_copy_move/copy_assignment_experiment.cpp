#include <iostream>
using namespace std;

void f()
{
  int x,y,z;
  z = 10;
  x = y = z;
  cout << x << '\t' << y << '\n';
}

int main()
{
  f();
}
