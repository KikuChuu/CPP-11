#ifndef __VECTOR_H__
#define __VECTOR_H__
#include <stddef.h>
#include <initializer_list>

class Vector {
  double* elem;
  size_t sz;
public:
  Vector(std::initializer_list<double>);  // initialize with a list
  void push_back(double);                 // add element at end increasing the size by one
  double& operator[](int i) const;
  size_t size() const;
};

#endif
