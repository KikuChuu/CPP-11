class Nonlocal {
public:
  Nonlocal() {}
  void destroy() { this->~Nonlocal(); }
private:
  ~Nonlocal() {}
};

void f()
{
  Nonlocal x; // errors
  Nonlocal* px = new Nonlocal{}; // ok
  delete px; // errors, private destructor
  px->destroy(); // ok

}

int main()
{
  f();
}
