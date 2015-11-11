#include <vector>

using namespace std;

template<typename T>
class DVector : public vector<T>
{
private:
  int begin;
};

void f()
{
  DVector<int> v{1,2,3,4};
}

int main()
{
  void f();
}
