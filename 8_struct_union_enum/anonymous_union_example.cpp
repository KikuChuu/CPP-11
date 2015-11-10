#include <new>
#include <string>

using namespace std;

class Entry2 {
private:
  enum class Tag {number, text};
  Tag type; // discriminant
  
  union {
    int i;
    string s; // string has a default constructor, copy operations, and destructor
  };
public:
  struct Bad_entry{}; // exceptions
  
  string name;

  ~Entry2();
  Entry2& operator=(const Entry2&); // due to string variant
  Entry2(const Entry2&);
  // ..
  
  int number() const;
  string text() const;
  
  void set_number(int n);
  void set_text(const string&);
  // ..  
};

int Entry2::number() const
{
  if (type != Tag::number) throw Bad_entry{};
  return i; 
}

string Entry2::text() const
{
  if (type != Tag::text) throw Bad_entry{};
  return s;
}

void Entry2::set_number(int n)
{
  if (type == Tag::text) {
    s.~string();
    type = Tag::number;
  }
  i = n;
}

void Entry2::set_text(const string& ss)
{
  if (type == Tag::text)
    s = ss;
  else {
    new(&s) string(ss);
    type = Tag::text;
  }
}

Entry2& Entry2::operator=(const Entry2& e) // due to string variant
{
  if (type == Tag::text && e.type == Tag::text) {
    s = e.s;
    return *this;
  }

  if (type == Tag::text) s.~string(); // explicit destroy

  switch (e.type) {
  case Tag::number:
    i = e.i;
    break;
  case Tag::text:
    new(&s)(e.s); // placement new: explicit construct
    type = e.type;
  }
  
  return *this;
}

Entry2::~Entry2()
{
  if (type == Tag::text) s.~string();
}

Entry2::Entry2(const Entry2& e)
{
  if (type == Tag::text && e.type == Tag::text) {
    s = e.s;
    return;
  }

  if (type == Tag::text) s.~string();

  switch(e.type) {
  case Tag::number:
    i = e.i;
    break;
  case Tag::text:
    new(&s)(e.s);
    type = e.type;
  }
}


int main() {}
