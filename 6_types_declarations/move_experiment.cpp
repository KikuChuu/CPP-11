#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void f();

template<typename T>
void print_v(vector<T>& vt);

int main()
{
  f();
}

void f()
{
  vector<int> vi {1,2,3,4,5,6,7,8,9,10};
  print_v(vi);
  vector<int> cvi = move(vi);
  print_v(cvi);
  print_v(vi);
}

template<typename T>
void print_v(vector<T>& vt)
{
  for (auto& x : vt)
    cout << x << " ";
  cout << '\n';
}
