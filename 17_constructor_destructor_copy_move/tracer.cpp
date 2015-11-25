#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tracer {
  string mess;
public:
  Tracer(const string& s) : mess(s) { cout << mess; }
  ~Tracer() { cout << "~" << mess; }
};

void f(const vector<int>& v)
{
  Tracer tr("in f()\n");
  for (auto x : v) {
    Tracer tr {string{"v loop "}+to_string(x)+'\n'};
  }
}

int main()
{
  f({2,3,5});
}
