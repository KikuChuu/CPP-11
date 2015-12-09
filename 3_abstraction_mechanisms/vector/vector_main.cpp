#include "vector.h"
#include <fstream>
using namespace std;


void fct(int n)
{
  Vector v(n);

  // ... use v ...

  {
    Vector v2(2*n);

    // ... use v2 ...

  }  // v2 is destroyed

  // ... use v ...

}   // v1 is destroyed

int main()
{
  fct(10);
}
