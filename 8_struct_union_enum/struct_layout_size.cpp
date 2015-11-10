#include <iostream>

using namespace std;


struct wasteful_struct {
  char a;
  int i;
  char b;
};

struct stingy_struct {
  int i;
  char a;
  char b;
};

void print_wasteful_struct_info()
{
  cout << "wasteful_struct: " << sizeof(wasteful_struct) << " bytes allocated.\n";
}

void print_stingy_struct_info()
{
  cout << "stingy_struct: " << sizeof(stingy_struct) << " bytes allocated.\n";
}

int main()
{
  print_wasteful_struct_info();
  print_stingy_struct_info();
}
