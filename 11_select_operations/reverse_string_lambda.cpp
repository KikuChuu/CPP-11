#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
using namespace std;

void f(string& s1, string& s2)
{
  function<void(char* b, char* e)> rev =
    [&](char* b, char* e){ if (1<e-b) { swap(*b, *--e); rev(++b,e); } };

  rev(&s1[0], &s1[0] + s1.size());
  rev(&s2[0], &s2[0] + s2.size());
}

void print_string(const string& s)
{
  cout << s << '\n';
}

int main()
{
  string s1 = "Hello";
  string s2 = "Goodbye";

  print_string(s1);
  print_string(s2);
  f(s1,s2);
  print_string(s1);
  print_string(s2);
  
}
