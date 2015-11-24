class Date {
public:
  void add_month(int n);

private:
  int d,m,y;
};

inline void Date::add_month(int n)
{
  m+=n;
}

int main()
{

}
