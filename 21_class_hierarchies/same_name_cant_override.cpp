#include <iostream>
using namespace std;

class B1 {
public:
  // ...
  virtual void foo() final { cout << "Hello, B1\n"; }
};

class B2 {
public:
  // ...
  virtual void foo() { cout << "Good riddance, B2!\n"; }
};

class D2 : public B2{
public:
  virtual void foo() override { cout << __PRETTY_FUNCTION__ << '\n'; }
};

class D :public B1, public D2 
{};

class D3: public D 
{
  virtual void foo() override { cout << "Does this still work?\n"; }
};


int main()
{
    D d;
//    d.foo();    // error - ambiguous
    
    D2& d2 = d;
    d2.foo();   // calls D2::foo
    B2& b2 = d;
    b2.foo();   // calls D2::foo
    
    B1& b1 = d;
    b1.foo();   // calls B1::foo
}

