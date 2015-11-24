class Date {
public:
  Date(int dd=0, int mm=0, int yy=0);
  Date& operator=(Date& date);
  static void set_default(int dd, int mm, int yy);
private:
  int m,d,y;
  static Date default_date;
};

Date::Date(int dd, int mm, int yy)
{
  d = dd ? dd : default_date.d;
  m = mm ? mm : default_date.m;
  y = yy ? yy : default_date.y;
}

void Date::set_default(int dd, int mm, int yy)
{
  
}

Date& Date::operator=(Date& date)
{
}
void f()
{

}

int main()
{
  Date d;
}
