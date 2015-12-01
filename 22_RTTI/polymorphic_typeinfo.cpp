#include <iostream>
#include <stdexcept>
#include <typeinfo>
using namespace std;

struct Poly { // A polymorphic class because a virtual is defined.
  virtual void f() {};
};

struct Non_poly { }; // non polymorphic

struct D1
  : Poly {};

struct D2
  : Non_poly {};

void f(Non_poly& npr, Poly& pr)
{
  cout << typeid(npr).name() << '\n';
  cout << typeid(pr).name() << '\n';
}

void g()
{
  D1 d1;
  D2 d2;
  f(d2, d1); // writes "Non_poly D1"
//  f(*static_cast<Poly*>(nullptr),*static_cast<Non_poly*>(nullptr));
}

struct Error {};

int main()
{
  try {
    g();
  }
  catch (...)
  {
    cout << "Bad type_id thrown\n";
  }
}
