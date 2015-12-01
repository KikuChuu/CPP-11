#include <iostream>
using namespace std;

class B;

class A {
public:
  void foo(B&);
};

class B {
public:
  void foo(A&);
};

void B::foo(A& a)
{
  cout << "This is B\n";
}

void A::foo(B& b)
{
  b.foo(*this);
}

int main() 
{
  A a;
  B b;
  a.foo(b);
}
