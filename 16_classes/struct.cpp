#include <iostream>
using namespace std;

struct X {
private:
  int a;
};

int main()
{
 X x;
 x.a = 10;
 cout << x.a << '\n';
}
