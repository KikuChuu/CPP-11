#define NDEBUG
#include <cassert>
using namespace std;


void f()
{
  assert(2==1); 
}

void g()
{
  static_assert(2==1, "2 is not equivalent to 1.\n");
}

int main()
{
  f();
  g();
}
