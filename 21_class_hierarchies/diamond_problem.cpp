#include <iostream>
#include <vector>
using namespace std;

class A {
public:
  virtual void fn() { cout << __PRETTY_FUNCTION__ << '\n'; } 
};

class B : public A {
public:
  virtual void fn() { cout << __PRETTY_FUNCTION__ << '\n'; }
private:
  vector<A*> parent;
};

class C : public A {
public:
  virtual void fn() { cout << __PRETTY_FUNCTION__ << '\n'; }
};

class D : public B, public C {
public:
  virtual void access();
};

void D::access()
{
  if (auto pb = dynamic_cast<A*>(this))
    pb->fn();
  if (auto pb = dynamic_cast<B*>(this))
    pb->fn();
  if (auto pb = dynamic_cast<C*>(this))
    pb->fn();
}

void f()
{
  D d;
  d.access();
}

int main()
{
  f();
}
