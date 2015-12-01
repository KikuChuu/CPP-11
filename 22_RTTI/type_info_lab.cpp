#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

class Base {
  virtual void foo()=0;
};

class Derived : public Base {
  void foo() override {}
};

class D2 : public Derived {
  void foo() override {}
};


void print(const char* str)
{
  cout << string{str} << '\n';
}

void f()
{
  print(typeid(int).name());
  print(typeid(Base).name());
  print(typeid(Derived).name());
  print(typeid(D2).name());
  Base* b = new D2{};
  print(typeid(b).name());  
  double date = 0.0;
  print(typeid(date).name());
}
int main()
{
  f();
}
