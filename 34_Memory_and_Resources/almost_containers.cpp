#include <iostream>
using namespace std;

template<typename T>
void f(T b)
{
  cout << b << '\n';
}

int main()
{
  f(1);
  f(2.0);
  f("hello");
  f('c');
}
