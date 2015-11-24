class X {
public:
  X(int n) : m(n) {}
private:
  int m;
};

void f()
{
  X x(1);
}

int main()
{
  f();
}
