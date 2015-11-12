#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template<class C>
void print_modulo(const C& v, ostream& os, int m)
{
  breadth_first(begin(v),end(v),
      [&os,m](int x) { if (x%m==0) os << x << '\n'; }
  );
}

int main()
{
  vector<int> v {1,2,3,4,5,6};
  print_modulo(v, cout, 2);
}
