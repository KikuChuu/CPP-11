#include <initializer_list>
#include <iostream>

using namespace std;

void f();
void print_list(initializer_list<int>&);

int main()
{
  f();
}

void f()
{
  auto x0 {1};
  auto x1 {1,2,3,4};
  print_list(x0);
  print_list(x1);
}

void print_list(initializer_list<int>& list)
{
  for (auto& x : list)
    cout << x << '\n';
}
