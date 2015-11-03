#include <iostream>

using namespace std;

void f()
{
  char* p = "Hello";
  cout << p << '\n';
//  p[2] = 'e';
}

void g()
{
  char arr[] = "Bye";
  cout << arr << '\n';
  arr[1] = 'a';
  cout << arr << '\n';
}

int main()
{
  cout << sizeof("Bohr") << '\n';
  f();
  g();
}
