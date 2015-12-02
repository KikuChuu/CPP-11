#include <iostream>
using namespace std;
enum class Flag : char;

enum class Flag : char { x=1, y=2, z=4, e=8, f=127, g = 128 };

void f()
{
  cout <<  sizeof(Flag) << '\n';;
}

int main()
{
  f();
}
