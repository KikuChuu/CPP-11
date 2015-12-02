#include <string>
using namespace std;

template<typename T>
struct X {
  int m1 = 7;
  T m2;
  X(const T& x) : m2{x} {}
};

void f()
{
  X<int> xi{9};
  X<string> xs{"Rapperswil"};
}

int main()
{
  f();
}
