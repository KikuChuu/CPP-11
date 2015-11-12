#include <limits>
#include <iostream>

using namespace std;

int high_value(initializer_list<int> val)
{
  int high = numeric_limits<int>::min();
  if (val.size() == 0)
    return high;
  
  for (auto x : val)
   if (x > high) high = x;
  return high;
}

int print_value(string vName, int v)
{
  cout << "Value of " << vName << ": " 
        << v << '\n';
}

int main()
{
  int v1 = high_value({1,2,3,4,5,6,7});
  int v2 = high_value({-1,2,v1,4,-9,20,v1});
  print_value("v1", v1);
  print_value("v2", v2);
}
