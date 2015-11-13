#include <iostream>
using namespace std;

void f()
{
  cout << __DATE__ << '\t' << __TIME__ << '\n';  
}

void g()
{
  cout << __FILE__ << '\n';
}

void h()
{
  cout << __LINE__ << '\n';
}

void i()
{
  (__STDC_HOSTED__) ? cout << "Is hosted\n" : "Is NOT hosted\n";
}

void j()
{
  (__STDCPP_THREADS__) ? cout << "Can have mutliple threads\n" : "Cannot have multiple threads\n";
}
int main()
{
  f();
  g();
  h();
  i();
  j();
}
