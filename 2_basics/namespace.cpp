#include <iostream>

namespace My_code {
  int main();
};

int My_code::main()
{
  std::cout << "Hello, World!\n";
  return 0;
}

int main()
{
  int i = My_code::main();
  std::cout << i << "\n";
}
