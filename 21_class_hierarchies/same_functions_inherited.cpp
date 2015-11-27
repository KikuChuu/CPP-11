#include <iostream>
using namespace std;

class B1 {
public:
  virtual void foo() final { cout << "Hello, B1\n"; }
};

class B2 {
public:
  
  virtual void foo() { cout << "Good riddance, B2\n"; }
};

class D :public B1, public B2 {
public:
  void foo() { cout << "I am Derived!\n"; }
};

void g()
{
  D d;
  d.foo();
  B1 b1 = d;
  B2 b2 = d;
  b1.foo();
  b2.foo();
}

int main()
{
  g();
}
