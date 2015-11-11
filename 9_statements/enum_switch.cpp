#include <iostream>
using namespace std;

enum class Vessel { cup, glass, goblet, chalice };

void f()
{
  cout << "cup\n";
}

void g()
{
  cout << "glass\n";
}

void h()
{
  cout << "goblet\n";
}

void m()
{
  cout << "chalice\n";
}

void problematic(Vessel v)
{
  switch (v) {
  case Vessel::cup: f(); break;
  case Vessel::glass: g(); break;
  case Vessel::goblet: h(); break;
  }
}

void set_as_cup(Vessel& v)
{
  v = Vessel::cup;
}

void set_as_chalice(Vessel& v)
{
  v = Vessel::chalice;
}

int main()
{
  Vessel v;
  set_as_cup(v);
  problematic(v);

  set_as_chalice(v);
  problematic(v);
}
