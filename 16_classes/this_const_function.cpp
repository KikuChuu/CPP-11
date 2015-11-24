#include <iostream>
using namespace std;

class Date {
public:
  Date(int dd, int mm, int yy) : d(dd), m(mm), y(yy) {}
  Date(const Date& date) { d = date.day(); m = date.month(); y = date.year(); } 
  const Date& date() const;
  int day() const { return d; }
  int month() const { return m; }
  int year() const { return y; }
  void add_day(int n) { d += n; }
private:
  int d,m,y;
};

const Date& Date::date() const
{
  return *this;
}

ostream& operator<<(ostream& os, Date& d)
{
  os << "Day/Month/Year: " << d.day() << '/' << d.month() << '/' << d.year() << '\n';
}

void f()
{
  Date d{11,6,2015};
  Date d_copy(d.date());
  cout << d_copy;
}

int main()
{
  f();
}
