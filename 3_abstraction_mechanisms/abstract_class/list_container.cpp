#include "list_container.h"

List_container::List_container()
{
}

List_container::List_container(std::initializer_list<double> lst)
  : ld{lst}
{
}

List_container::~List_container()
{
}

double& List_container::operator[](size_t i)
{
  for (double& x : ld) {
    if (i == 0) return x;
    i--;
  }
}
size_t List_container::size() const
{
  return ld.size();
}
