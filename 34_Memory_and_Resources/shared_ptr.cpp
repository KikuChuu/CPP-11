#include <iostream>
#include <memory>
#include <string>
using namespace std;

void foo()
{
  auto p = make_shared<string>(string("Hello"));
  shared_ptr<string> p2 = p;
  cout << *p << '\n';
  cout << *p2 << '\n';
}

int main()
{
  foo();
}
