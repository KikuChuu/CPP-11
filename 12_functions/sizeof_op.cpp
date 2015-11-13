#include <iostream>
using namespace std;

constexpr int ftbl[] { 1,2,3,5,8,13 };

void print_msg(const string& msg, const int& val)
{
  cout << msg << val << '\n';
}

constexpr int fib(int n)
{
  return (n<sizeof(ftbl)/sizeof(*ftbl)) ? ftbl[n] : fib(n);
}

void print_int(const int a)
{
  cout << a << '\n';
}

int main()
{
  constexpr int n = 7;
  print_msg("Input arg:        ", n);
  print_msg("table in bytes:   ", sizeof(ftbl));
  print_msg("pointer in bytes: ", sizeof(*ftbl));
  fib(n);
}
