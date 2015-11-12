#include <iostream>
#include <cassert>
using namespace std;

constexpr unsigned short middle(int x)
{
  static_assert(sizeof(int)==4, "unexpected int size");
  static_assert(sizeof(short)==2, "unexpected short size");
  return (x>>8)&0x00FF;
}

int main()
{
  int x = 0xFF00FF00;
  unsigned short y = middle(x);
  cout << "value of x: " << x << '\n';
  cout << "value of y: " << y << '\n';
}
