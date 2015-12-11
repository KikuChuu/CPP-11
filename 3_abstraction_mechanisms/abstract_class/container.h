#ifndef __CONTAINER_H__
#define __CONTAINER_H__
#include <stddef.h>
#include <iostream>

class Container {
public:
  virtual double& operator[](size_t) = 0;  // pure virtual function
  virtual size_t size() const = 0; 
  virtual ~Container() {}
};

void use(Container&);

#endif
