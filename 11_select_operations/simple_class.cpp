#include <new>

using namespace std;

class X {
public:
  X() {}
  X(int);
};

int main()
{
  void* buf = reinterpret_cast<void*>(0xF00F);
  X* p2 = new(buf) X;
}
