#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

map<vector<string>,vector<int>> f()
{
  map<vector<string>, vector<int>> years {
    { {"Maurice", "Vincent", "Wilkes"}, {1913, 1945, 1951, 1967, 2000} },
    { {"Martin", "Richards"}, {1982, 2003, 2007} },
    { {"David", "John", "Wheeler"}, {1927, 1947, 1951, 2004} }
  };

  return years;
}

void g()
{
  map<vector<string>,vector<int>> m = f();
  vector<string> v{"Martin", "Richards"};
  vector<int> vi = m[v];
  for (auto& x : vi) cout << x << '\t';
/*
  for (auto& k : m)
    for (auto& s : k)
      cout << s << '\n';
  cout << '\n';
*/
}

int main()
{
  g();
}
