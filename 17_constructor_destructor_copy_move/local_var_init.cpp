struct Buf {
  int count;
  char buf[16*1024]{};
};

void f()
{
  Buf b;
}

int main()
{
  f();
}
