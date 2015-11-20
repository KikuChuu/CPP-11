#include <iostream>
#include <sstream>
using namespace std;

void test()
{
  istringstream iss;
  iss.str("Foobar");

  cout << iss << '\n';
  cout << iss.str() << '\n';
}

int main()
{
  test();
}
