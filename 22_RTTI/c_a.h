#ifndef __A_H__
#define __A_H__

#include "c_b.h"

class B;
class A {
public:
  void foo(B&);
};

void A::foo(B& b)
{
  b.foo(*this);
}
#endif
