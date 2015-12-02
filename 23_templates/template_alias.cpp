#include <vector>
#include <memory>
using namespace std;

void f()
{
  template<typename T>
  using My_alloc = allocator<T>;

  using Cvec = vector<char>;  // Both template arguments are bound.

  Cvec vc = {'a', 'b', 'c'};  

  template<typename T>
  using Vec = vector<T,My_alloc<T>>; // Only the second template arg is bound.

  Vec<int> fib = {0, 1, 1, 2, 3, 5, 8, 13};

  // original templates and their respective aliases are equivalent
  vector<char, My_alloc<char>> vc2 = vc; 
  vector<int, My_alloc<int>> verbose = fib;
}

int main()
{
  f();
}
