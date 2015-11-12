#include <iostream>

using namespace std;

void f(int x)
{
  switch(x) {
  case 1:
    cout << "Souma";
    break;
  case 2:
    cout << " is";
    break;
  case 3:
    cout << " the best!";
  }
}

int main()
{
  for (int i = 1; i < 4; ++i)
    f(i);
}
