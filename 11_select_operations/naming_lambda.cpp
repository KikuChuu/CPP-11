#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print_modulo(const vector<int>& v, ostream& os, int m)
{
  auto Modulo_print = [&os,m](int x) { if (x%m==0) os << x << '\n'; };

  for_each(begin(v), end(v), Modulo_print);
}

int main()
{
  vector<int> v = {1,2,3,4,5};
  print_modulo(v, cout, 2);
}
