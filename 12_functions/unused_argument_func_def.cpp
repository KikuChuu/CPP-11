#include <iostream>
using namespace std;

void f(int, int, char);

void f(int x, int y, char)
{
  cout << x*y << '\n';
}

int main()
{
  f(3,2,'a');
}
