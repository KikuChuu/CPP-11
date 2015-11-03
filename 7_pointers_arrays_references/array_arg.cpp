#include <iostream>

using namespace std;

void comp(double arg[10]);
void print(double arg[19]);

int main()
{
  double a[10];
  double b[5];
  comp(b);
  print(b);
}

void print(double arg[10])
{
  for (int i = 0; i < 10; i++)
    cout << arg[i] << " ";
  cout << '\n';
}

void comp(double arg[10])
{
  for (int i = 0; i < 10; i++)
    arg[i] += 99;
}
