#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void f(string& s1, string& s2, string& s3)
{
  const char* cs = (s1 + s2).c_str();
  cout << cs;
  if (strlen(cs=(s2+s3).c_str())<8&&cs[0]=='a') {
    // cs used here
    cout << cs << '\n';
  }
}

int main()
{
  string s1 = "Hello";
  string s2 = "aye";
  string s3 = "W";

  f(s1,s2,s3);
  
}
