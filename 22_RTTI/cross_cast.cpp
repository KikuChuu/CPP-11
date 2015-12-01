#include <iostream>
#include <fstream>
using namespace std;

class Base {
public:
  virtual void print();
};

class A : public Base {
public:
  void print() override  { cout << "A::" << __PRETTY_FUNCTION__ << '\n'; }
};

class B : public Base {
public:
  void print() override { cout << "B::" << __PRETTY_FUNCTION__ << '\n'; }
};

class D : public A, public B {

};


void fct(Base* p)
{
  if (auto pb = dynamic_cast<B*>(p)) {
    pb->print();
  } else {
    p->print();
  }
}

int main()
{
  B* pb = new B();
  Base* pBase = dynamic_cast<Base*>(pb);
  fct(pBase);
}


