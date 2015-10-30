#include <iostream>

void print_hello()
{
  std::cout << "Hello\n";
}

using PtoF = void(*)();

PtoF = &print_hello;

int main() 
{
  PtoF();  
}
