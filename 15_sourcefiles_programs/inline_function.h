#include <iostream>

class A 
{
  public:
    A() {}
    inline void print() const { std::cout << "Hello, A\n"; }
};
