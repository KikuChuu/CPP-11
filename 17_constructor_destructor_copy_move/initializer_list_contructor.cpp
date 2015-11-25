#include <initializer_list>
using namespace std;

template<class E>
class Vector {
public:
  Vector(std::initializer_list<E> s); // initializer-list constructor

private:
  int sz;
  E* elem;
};

template<class E>
Vector::Vector(std::initializer_list<E> s)
  : sz(s.size())
{
  reserve(sz);
  unitialize
}
