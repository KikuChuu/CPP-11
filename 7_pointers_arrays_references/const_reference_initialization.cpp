void f()
{
  const int& cri = 1; // this works
  int & ri = 1; // this won't
}

int main()
{
  f();
}
