#include <iostream>
using namespace std;

void f()
{
  auto z = []()->int { return 1; };
  cout << z << '\n';;
}

int main()
{
  f();
}
