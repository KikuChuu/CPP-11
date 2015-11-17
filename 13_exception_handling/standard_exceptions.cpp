#include <iostream>
#include <stdexcept>
using namespace std;

struct My_error2 : std::runtime_error {
  const char* what() const noexcept { return "My_error2"; }
};

void g(int n)
{
  if (n)
    throw std::runtime_error("I give up");
  else
    throw My_error2{};
}

void f(int n)
{
  try {
    g(n);
  }
  catch (std::exception& e) {
    cerr << e.what() << '\n';
  }
}

int main()
{
  f(1);
}
