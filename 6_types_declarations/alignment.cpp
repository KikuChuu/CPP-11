#include <iostream>
#include <vector>

using namespace std;

void f()
{
  vector<int> x {1};  
  auto a = alignof(x);
  cout << a << '\n';
}

int main()
{
  f();
}
