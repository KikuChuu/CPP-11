#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

void test()
{
  try {
    vector<int> v(27);
    v[v.size()];
  }
  catch (length_error) {
    cout << "invalid length for vector initialization.\n";
  }
  catch (bad_alloc) {
    cout << "Unable to allocate memory for vector initialization.\n"; 
  }
}

int main()
{
  test();
}
