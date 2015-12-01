#ifndef __B_H__
#define __B_H__
#include "c_a.h"
#include <iostream>
class A;
class B {
public:
  void foo(A&);
};

void B::foo(A& a)
{
  std::cout << "This is B\n";
}
#endif
