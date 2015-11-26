struct B {
  void f() const;
  virtual void g(double);
};

void B::g(double d)
{
}

struct D : public B {
  void f() const;
  void g(double) override;
};

void D::g(double d)
{
  
}


int main() {}
