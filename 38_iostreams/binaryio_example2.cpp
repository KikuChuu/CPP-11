#include <fstream>
#include <vector>
using namespace std;

template<typename T>
char* as_byte(T& i)
{
  return reinterpret_cast<char*>(&i);
}

void test()
{
  ifstream ifs("source", ios_base::binary);
  ofstream ofs("target", ios_base::binary);
  
  vector<int> v;

  for (int i; ifs.read(as_byte(i), sizeof(i)); ) {
    v.push_back(i);
  }

  for (auto i : v)
    ofs.write(as_byte(i),sizeof(i));
}

int main()
{
  test();
}
