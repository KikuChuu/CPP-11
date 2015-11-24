class X {
public:
  X() {}
  X(int n) : m(n) {}

private:
  int m{0};
};

void f()
{
  X x;
}

int main()
{
  f();
}
