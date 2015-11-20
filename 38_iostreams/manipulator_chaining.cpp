#include <iostream>
using namespace std;

void foo()
{
  constexpr double d = 123.456;

  cout << d << "; "
        << scientific << d << "; "
        << fixed << d;
  cout << '\n';
}

int main()
{
  foo();
}
