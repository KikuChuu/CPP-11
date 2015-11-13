void print(double);
void print(long);

void print(double d) {}
void print(long l) {}

void f()
{
  print(1L);
  print(1.0);
//  print(1); // ambiguous
}

int main()
{
  f();
}
