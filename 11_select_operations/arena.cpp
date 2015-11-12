#include <cstddef>

using namespace std;

class Arena {
public:
  virtual void* alloc(size_t) =0;
  virtual void free(void*) =0;
};

void* operator new(size_t sz, Arena a)
{
  return a->alloc(sz);
}

extern Arena* Persistent;
extern Arena* Shared;

class X {
public:
  X() {}
  X(int i) {}
};

void g(int i)
{
  X* p = new(Persistent) X(i);
  X* p = new(Shared) X(i);
}

int main()
{
  g(1);
}
