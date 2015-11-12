#include <iostream>
#include <cstddef>

using namespace std;

void f()
{
  size_t i = 1;
  while (0 < i) i++;
  cout << "i has become negative! " << i << '\n';
}

int main()
{
  f();
}
