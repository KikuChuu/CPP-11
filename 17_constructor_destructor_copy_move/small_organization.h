#ifndef __SMALL_ORGANIZATION__
#define __SMALL_ORGANIZATION__
#include <string>
#include <vector>

class Club {
  std::string name;
  std::vector<std::string> members;
  std::vector<std::string> officers;
  Date founded;
  // ...
  Club(const std::string& n, Date fd);
};

#endif
