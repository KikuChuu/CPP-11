#include <iostream>
using namespace std;

int main()
{
  cin >> noskipws;
  for (int i; cin >> i && i > 0; ) {
    if (!cin.fail())
      cout << i << '\n';
    else {
      cin.clear();
      string s;
      if (cin >> s) {
        cout << s << '\n';
      }
    }
  }
}
