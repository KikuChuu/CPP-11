#include <iostream>
#include <memory>
using namespace std;

void f()
{
  unique_ptr<int> pi {new int{10}};
  cout << *pi << '\n';
}

int main()
{
  f();
}
