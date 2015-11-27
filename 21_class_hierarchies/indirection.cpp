#include <memory>
using namespace std;

class int_maker {
public:
  virtual int* lol(int) =0;
};

class BB_maker :public int_maker {
public:
  int* lol(int) override;
};

class LS_maker :public int_maker {
public:
  int* lol(int) override;
};

int* BB_maker::lol(int n)
{
  return new int{n};
}

int* LS_maker::lol(int n)
{
  return new int{n};
}

void user(int_maker& im)
{
  unique_ptr<int_maker> pb{im.lol(10)};
}

BB_maker bb;
LS_maker ls;

int main()
{
  user(bb);
  user(ls);
}
