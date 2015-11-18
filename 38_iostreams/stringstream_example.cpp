#include <iostream>
#include <sstream>
using namespace std;

void foo()
{
  const string s = "The Start of the Stream Buffer: \n";
  ostringstream oss{s, ios_base::ate};
  for (string ch; cin >> ch && ch != "q"; ) {
    oss << ch;
    cout << oss.str();
  }
  oss << '\n';
  
  cout << "\nOutputting the result:\n";
  cout << "----------------------\n";
  cout << oss.str();
}

int main()
{
  foo();
}
