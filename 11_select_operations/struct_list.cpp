struct S {int a, b; };

void f()
{
  S v {7,8};
  v = S{7,8};
  S* p = new S{7,8};
}

int main()
{
  f();
}
