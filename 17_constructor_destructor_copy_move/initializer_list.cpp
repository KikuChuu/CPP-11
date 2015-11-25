#include <initializer_list>
#include <iostream>
using namespace std;

void f(initializer_list<int> args)
{
  for (auto p = args.begin(); p != args.end(); ++p)
    cout << *p << '\n';
}

int main()
{
  f({1,2,3,4,5,6});
}
