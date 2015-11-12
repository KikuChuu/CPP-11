void f()
{
  char x = 'a';
  //int* p1 = &x; no implicit conversion from char* to int*
  //int* p2 = static_cast<int*>(&x); // no impleicit conversion from char* to int*
  int* p3 = reinterpret_cast<int*>(&x);
  struct B {};
  struct D : B {};
  
  B* pb = new D;
  //D* pd = pb; // error: no implicit conversion from B* to D*
  D* pd = static_cast<D*>(pb);
}

int main()
{
  f();
}
