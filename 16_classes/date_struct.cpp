struct Date {
  int d, m, y;
  
  Date(int dd = 0, int mm = 0, int yy = 0) : d(dd), m(mm), y(yy) {}
  void add_year(int n);
  void add_month(int n);
  void add_day(int n);
};

void f()
{
  Date d{10};
  Date d1 = 15;
}

int main()
{
  f();
}

