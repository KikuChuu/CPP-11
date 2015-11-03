char* ident(char* p) { return p; }
void f()
{
  char& r {ident(nullptr)};
}

int main()
{
  f();
}
