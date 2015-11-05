#include <iostream>
#include <bitset>
#include <string>
using namespace std;

class SimpleObjectWithBitsetInternal {
public:
  SimpleObjectWithBitsetInternal();
  explicit SimpleObjectWithBitsetInternal(const char i);
  explicit SimpleObjectWithBitsetInternal(const string& s);  
  void binary() const;
  void decimal() const;
private:
  bitset<8> __data;
};

SimpleObjectWithBitsetInternal::SimpleObjectWithBitsetInternal()
{
  // bits are initialized to 0
}

SimpleObjectWithBitsetInternal::SimpleObjectWithBitsetInternal(const char c)
{
  __data = c;
}

SimpleObjectWithBitsetInternal::SimpleObjectWithBitsetInternal(const string& s)
{
  __data = bitset<8>{s};
}

void SimpleObjectWithBitsetInternal::binary() const
{
  cout << __data << '\n';
}

void SimpleObjectWithBitsetInternal::decimal() const
{
  cout << __data.to_ulong() << '\n';
}

int main()
{
 SimpleObjectWithBitsetInternal bs{"10000000"};
 bs.binary();
 bs.decimal();
}
