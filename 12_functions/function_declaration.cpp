#include <iostream>
using namespace std;

auto f()->int
{
  return 1;
}

int main() 
{
  cout << f() << '\n';
}
