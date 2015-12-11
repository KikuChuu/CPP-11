#include "vector.h"
#include <algorithm>
#include <initializer_list>

Vector::Vector(std::initializer_list<double> lst)
  : elem{new double[lst.size()]}, sz{lst.size()}
{
  std::copy(lst.begin(), lst.end(), elem);  
}

void Vector::push_back(double d)
{
}

double& Vector::operator[](int i) const
{
  return elem[i];
}

size_t Vector::size() const
{
  return sz;
}
