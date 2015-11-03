#include <iostream>

using namespace std;


int ma[3][5]; // global matrix. 3 arrays of 5 ints.

void init_ma()
{
  for (int i = 0; i < 3; i++) 
    for (int j = 0; j < 5; j++)
      ma[i][j] = 10 * i * j;
}

void print_ma()
{
  for (int i = 0; i < 3; i++) 
    for (int j = 0; j < 5; j++)
      cout << ma[i][j] << " ";
  cout << '\n';
}


int main()
{
  init_ma(); 
  print_ma();
}
