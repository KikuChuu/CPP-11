#include <sstream>
#include <iostream>
using namespace std;

void test()
{
  ostringstream oss{"Label: ", ios::ate};
  cout << oss.str() << '\n';
  oss << "val";
  cout << oss.str() << '\n';
  
  ostringstream oss2{"Label: "};
  cout << oss2.str() << '\n';
  oss2 << "val";
  cout << oss2.str() << '\n';
}

int main()
{
  test();
}
