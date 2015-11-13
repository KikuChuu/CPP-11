#include <string>
using namespace std;

struct S {
  int a;
  string s;

  S(int ma, string ms) : a(ma), s(ms) {}
};

void f2(S s)
{
}

void f()
{
  f2(S{1, "MKS"});
}

int main()
{
  f();
}
