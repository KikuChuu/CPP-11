#ifndef __VECTOR_H__
#define __VECTOR_H__

class Vector {
  double* elem; // elem points to an array of sz doubles
  int sz;

public:
  Vector(int s);  // constructor: acquire resources

  double& operator[](int i);
  int size() const;

  ~Vector();
};
#endif
