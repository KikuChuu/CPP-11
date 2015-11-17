#include <iostream>
#include <stdexcept>
using namespace std;

void f()
{
  try {
    throw exception{};
    // try something
  }
  catch (exception& err) {
    throw;
  }
}

int main()
{
  try {
    f();
  }
  catch (exception& e) {
    cout << "Hello, exception!\n";
  }
}
