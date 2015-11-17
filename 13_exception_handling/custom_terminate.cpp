#include <iostream>
#include <exception>
using namespace std;

using terminate_handler = void(*)();

[[noreturn]] void my_handler()    // handle terminate my way
{
  cout << "My_handler invoked" << __FILE__ << ", " << __LINE__ << '\n';
}

void dangerous()
{
  terminate_handler old = set_terminate(my_handler);
  set_terminate(old);
  terminate();
}

int main()
{
  dangerous();
}
