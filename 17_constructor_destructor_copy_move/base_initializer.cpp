#include <iostream>
using namespace std;

class B1 { 
public:
  B1() { cout << "B1()\n"; } ~B1() { cout << "~B1()\n"; } 
};

class B2 { 
public:
  B2(int i) { cout << "B2()\n"; } ~B2() { cout << "~B2()\n"; } 
};

struct D1 : B2, B1 {
public:
  D1(int i) : B1(), B2(i) { cout << "D1()\n"; }
  ~D1() { cout << "~D1()\n"; }
};

struct D2 : B1, B2 {
public:
  D2(int i) : B2(i) { cout << "D2()\n"; }
  ~D2() { cout << "~D2()\n"; }
};

void f()
{
  D1 d(1);
}

void g()
{
  D2 d(1);
}

int main()
{
  f();
  g();
}
