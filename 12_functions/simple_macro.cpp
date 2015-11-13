#include <iostream>
using namespace std;

#define hello 1
#define MAC(x,y) "argument1: " x " argument2: " y
#define printx(x) cout << #x " = " << x << '\n';

int a = 7;
string str = "asdf";

void f()
{
  printx(a);
  printx(str);
}

int main() 
{
  string e = MAC("foo bar", "yuk yuk");
  cout << e << '\n';
  f();
}
