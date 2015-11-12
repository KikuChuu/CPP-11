#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void algo(vector<int>& v)
{
  int count = v.size();
  generate(v.begin(), v.end(),
   [count]()mutable{ return --count; }
  );
}

void print_vector(const vector<int> v)
{
  for (auto& x : v) {
    cout << x << ' ';
  }
  cout << '\n';
}
int main()
{
  vector<int> v(10);
  algo(v);
  print_vector(v);
}
