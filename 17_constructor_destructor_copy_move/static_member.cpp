#include <iostream>
using namespace std;

template<class T, int N>
class Fixed {
public:
  static constexpr int max = N;
private:
  T a[max];
};

class X {
public:
  enum { c1 = 7, c2 = 11, c3 = 13, c4 = 17 };
};

void f()
{
  cout << Fixed<int, 1>::max << '\n';  
}

void g()
{
  cout << X::c1 << '\t' << X::c2 << '\t' << X::c3 << '\t' << X::c4 << '\n';
}

int main()
{
  f();
  g();
}
