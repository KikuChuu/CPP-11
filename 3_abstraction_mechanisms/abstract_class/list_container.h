#ifndef __LIST_CONTAINER__
#define __LIST_CONTAINER__
#include "container.h"
#include <list>


class List_container : public Container {
  std::list<double> ld;
public:
  List_container();
  List_container(std::initializer_list<double>);
  ~List_container();

  double& operator[](size_t);
  size_t size() const;
};

#endif
