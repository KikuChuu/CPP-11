#include <vector>
using namespace std;

template<typename T, typename C>
T get_nth(C& p, int n) {}

struct Index {
  operator int() {}
};

void f(vector<int>& v, short s, Index i)
{
  int i1 = get_nth<int>(v,2);
  int i2 = get_nth<int>(v,s);
  int i3 = get_nth<int>(v,i);
}

int main()
{
  vector<int> vi {1,2,3};
  short s = 1;
  Index i{};
  f(vi,s,i);
}
