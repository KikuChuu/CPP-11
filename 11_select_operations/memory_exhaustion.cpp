#include <new>
#include <iostream>
#include <vector>

using namespace std;

void f()
{
  vector<char*> v;
  try {
    while (true) {
      char* p = new char[10000];
      v.push_back(p);
      p[0] = 'x';
    }
  }
  catch(bad_alloc) {
    cerr << "Memory exhausted!\n";
  }
}

int main()
{
  f();
}
