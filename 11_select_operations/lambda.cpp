#include<iostream>
#include <algorithm>
#include <utility>
using namespace std;

void print_module(vector<int> v, ostream& os, int m)
  // output v[i] to os if v[i]%m == 0
{
  for_each(begin(v),end(v),
    [&os,m](int x) { if (x%m==0) os << x << '\n'; }
  );
}

int main() {}
