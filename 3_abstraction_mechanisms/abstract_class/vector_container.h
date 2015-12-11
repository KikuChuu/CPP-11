#ifndef __VECTOR_CONTAINER_H__
#define __VECTOR_CONTAINER_H__
#include "container.h"
#include "vector.h"

class Vector_container : public Container { 
  Vector v;
public:
  Vector_container(std::initializer_list<double>);
  ~Vector_container();

  double& operator[](size_t);
  size_t size() const;
};

#endif
