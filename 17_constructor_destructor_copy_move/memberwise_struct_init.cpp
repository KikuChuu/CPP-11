struct X {
  X(int n) {}
};

struct X2 {
  X x;
};

void f()
{
  X x{1};
}

int main()
{
  f();
}
