namespace Chrono {
  enum class Month { jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec };
  
  class Date {
  public:
    class Bad_date{}; // exception class

    explicit Date(int dd={}, Month mm={}, int yy={});

    int day() const;
    Month month() const;
    int year() const;

    string string_rep() const;
    void char_rep(char s[], int max) const;

    Date& add_year(int n);
    Date& add_month(int n);
    Date& add_day(int n);

  private:
    bool is_valid();
    int d,m,y;
  };

  // Date Helper
  bool is_date(int d, Month m, int year);
  bool is_leapyear(int y);

  bool operator==(const Date& a, const Date& b);
  bool operator!=(const Date& a, const Date& b);

  const Date& default_date();
  
  ostream& operator<<(ostream& os, const Date& d);
  istream& operator>>(istream& is, Date& d);
} // Chrono

bool Chrono::is_date(int d, Month m, int year)
{
  int ndays;

  switch (m) {
  case Month::feb:
    ndays = 28+is_leapyear(y);
    break;
  case Month::apr: case Month::jun: case Month::sep: case Month::nov:
    ndays = 30;
    break;
  case Month::jan: case Month::mar: case Month::may: case Month::jul:
    ndays = 31;
    break;
  default:
    return false;
  }
  
  return 1 <= d && d <= ndays;
}

const Date& default_date()
{
  static Date d {1, Month::jan, 1970};
  return d;
}

void f(Date& d)
{
  Date Ivb_day(16, Month::dec, d.year());

  if (d.day == 29 && d.month() == Month::feb) {

  }

  if (midnight()) d.add_day(1);

  cout << "day after: " << d + 1 << '\n';
  
  Date dd;
  cin >> dd;
  if (dd==d) cout << "Hurray!\n";
}
