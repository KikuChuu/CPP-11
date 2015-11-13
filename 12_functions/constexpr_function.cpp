#include <iostream>
using namespace std;

constexpr int f(int a)
{
  return a;
}

int main()
{
  int a = 1;
  int b = f(a);
  cout << f(a) << '\n';
}

