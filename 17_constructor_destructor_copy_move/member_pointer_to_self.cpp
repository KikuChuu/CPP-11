class X {
public:
  X() { x = new X(); }
private:
  X* x;
};

void f()
{
  X x;
}
int main()
{
  f();
}
