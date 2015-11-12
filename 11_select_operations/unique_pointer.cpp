#include <memory>
#include <stdexcept>

using namespace std;

void f(int n)
{
  int* p1 = new int[n];
  unique_ptr<int[]> p2 {new int[n]};

  if (n%2) throw runtime_error("odd");
  delete[] p1;
}

int main()
{
  f(3);
}
