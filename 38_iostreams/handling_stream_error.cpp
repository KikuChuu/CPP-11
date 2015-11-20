#include <iostream>
#include <sstream>
using namespace std;

void test()
{
  istringstream iss;
  iss.str("Foobar");
  if (iss) {
    cout << iss.str() << '\n';
  } else { // generally would not be reached
    cerr << "input string stream is in bad state\n";
  }
}

int main()
{
  test();
}
