#include <iostream>

using namespace std;

void f()
{
  char* s = "Beeeeeep\a\n";
  cout << s << '\n';
}

int main()
{
  f();
}
