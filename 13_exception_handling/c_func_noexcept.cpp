void f()
{
  int* p = new int(1);
  delete p;
}

void g() noexcept
{
  int* q = new int(1);
  delete q;
}

int main()
{
  f();
  g();
}
