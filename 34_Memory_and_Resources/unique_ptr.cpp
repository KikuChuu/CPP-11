#include <iostream>
#include <memory>
#include <utility>
using namespace std;

int main()
{
   unique_ptr<int> p(new int(1));
  cout << *p << '\n';
  unique_ptr<int> p2{move(p)};
  cout << *p2 << '\n';
  cout << *p << '\n';
}
