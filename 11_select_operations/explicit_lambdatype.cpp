#include <iostream>
#include <functional>
using namespace std;

void f()
{
  function<int(int)> z = [](int x){ return x*x; };
  cout << z(10) << '\n';
}

int main()
{
  f();
}
