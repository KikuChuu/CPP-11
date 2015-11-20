#include <iostream>
#include <sstream>
using namespace std;

void foo()
{
  const string s = "The Start of the Stream Buffer: \n";
  stringstream ss{s, ios_base::out|ios_base::ate};
  for (string ch; cin >> ch && ch != "q"; ) {
    ss << ch;
    cout << ss.str();
  }
  ss << '\n';
  
  cout << "\nOutputting the result:\n";
  cout << "----------------------\n";
  cout << ss.str();
}

int main()
{
  foo();
}
