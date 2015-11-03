#include <iostream>

using namespace std;

void fp(char* p)
{
  while (*p)
    cout << ++*p;
}

void fr(char& r)
{
  while (r)
    cout << ++r;
}

int main()
{
  char* name {"John"};
  char c = 'a';
//  fp(name);
  fr(c);
}
