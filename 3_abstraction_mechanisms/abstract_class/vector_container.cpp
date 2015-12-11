#include "vector_container.h"

Vector_container::Vector_container(std::initializer_list<double> lst)
  : v{lst}
{
}

Vector_container::~Vector_container() 
{
}

double& Vector_container::operator[](size_t i) 
{ 
  return v[i]; 
}

size_t Vector_container::size() const 
{ 
  return v.size(); 
}


