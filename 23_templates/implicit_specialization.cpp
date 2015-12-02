// Implicit specialization for declaring variable types DOESNOT WORK.

#include <vector>
#include <iostream>
using namespace std;
/*
void g(const vector& v)
{
  for (auto& x : v)
    cout << x << '\t';
  cout << '\n';
}
*/
void f()
{
  vector<int> vi {1,2,3,4,5};
 // g(vi);
}

int main()
{
  f();
}
