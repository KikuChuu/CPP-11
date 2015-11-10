#include <iostream>
#include <utility>

using namespace std;

struct Address {
  const char* name;
  int number;
  const char* street;
  const char* town;
  char state[2];
  const char* zip;
  Address& operator==(Address& op);
};


void f()
{
  Address jd = {
    "Jim Dandy",
    61, "South St",
    "New Providence",
    {'N','J'}, "07974"
  };
}

Address init_addr(Address a)
{
  a = {
    "Jim Dandy",
    61, "South St",
    "New Providence",
    {'N','J'}, "07974"
  };
  return a;
}

void print_addr(const Address* p)
{
  cout << (*p).name << '\n'
        << (*p).number << ' ' << (*p).street << '\n'
        << (*p).town << '\n'
        << (*p).state[0] << (*p).state[1] <<  ' ' << (*p).zip << '\n';
}

void print_adr(const Address& r)
{
  cout << r.name << '\n'
        << r.number << ' ' << r.street << '\n'
        << r.town << '\n'
        << r.state[0] << r.state[1] << ' ' << r.zip << '\n';
}

int main()
{
  Address jd;
  jd = move(init_addr(jd));
  print_addr(&jd);
  print_addr(&jd);
}
