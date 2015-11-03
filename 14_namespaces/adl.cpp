#include <iostream>
#include <string>

namespace Some_space {
  class Date {};
  void some_function(const Date& d) { std::cout << "Hello, date\n"; }
};

void f(Some_space::Date d)
{
  some_function(d);
}

int main()
{
  Some_space::Date d;
  f(d);
}
