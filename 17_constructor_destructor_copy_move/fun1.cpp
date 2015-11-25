#include <memory>
#include <string>
using namespace std;

class Fun {
public:
  Fun();
  Fun(int m);
  Fun(int m, int* pm);
  Fun(int m, int* pm, string& s);
  Fun(int m, int* pm, string& s, string* ps);
  Fun(Fun& f);
  Fun(Fun&& f);
  Fun& operator=(Fun& f);
  Fun& operator=(Fun&& f);
  ~Fun();
private:
  int __m;
  int* __pm;
  string __s;
  string* __ps;
};

Fun::Fun()
{
  __m = 0;
  __pm = new int(0);
  __s = "";
  __ps = new string{""};
}

Fun::Fun(int m)
{
  __m = m;
  __pm = new int(0);
  __s = "";
  __ps = new string{""};
}
Fun::Fun(int m, int* pm)
{
  __m = m;
  __pm = 
}
Fun::Fun(int m, int* pm, string& s);
Fun::Fun(int m, int* pm, string& s, string* ps);
Fun::Fun(Fun& f);
Fun::Fun(Fun&& f);
Fun::Fun& operator=(Fun& f);
Fun::Fun& operator=(Fun&& f);
Fun::~Fun();
