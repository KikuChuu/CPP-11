#include <iostream>
using namespace std;

template<typename T>
void f()
{
  cout << T{} << '\n';;
  int{};
  double{};
  char{};
}
int main()
{
  f<int>();
}
