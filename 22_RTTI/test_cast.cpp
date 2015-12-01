#include <iostream>
#include <cstdlib>
using namespace std;

class A {

};

class B : public A {};
class C : public A {};
class D : public B, public C {};

void f()
{
  D d;
  if (auto pb = dynamic_cast<A*>(&d))
    cout << "aaa\n";
  if (auto pb = dynamic_cast<B*>(&d))
    cout << 'B' << '\n';
  else if (auto pb = dynamic_cast<C*>(&d))
    exit(1);
  else
    cout << "?" << '\n';
}

int main()
{
  f();
}


