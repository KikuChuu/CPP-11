#include "container.h"

void use(Container& c)
{
  const size_t sz = c.size();
  for (size_t i = 0; i < sz; i++)
    std::cout << c[i] << '\n';
}
