#include <iostream>
#include <array>
#include <tuple>
using namespace std;


class SimpleObjectWithArrayInternal {
public:
  SimpleObjectWithArrayInternal();
  explicit SimpleObjectWithArrayInternal(const int val);
  array<int, 100> datastore() const;
private:
  array<int, 100> __datastore;
};

SimpleObjectWithArrayInternal::SimpleObjectWithArrayInternal()
{
  __datastore.fill(0);
}

SimpleObjectWithArrayInternal::SimpleObjectWithArrayInternal(const int val)
{
  __datastore.fill(val);
}

array<int,100> SimpleObjectWithArrayInternal::datastore() const
{
  return __datastore;
}

int main()
{
  array<string, 100> as = {"Alex", "Bart", "Cindy", "Doug", "Ethan", "Fred", "George", "Hank"};
  cout << as.back() << '\n';
}
