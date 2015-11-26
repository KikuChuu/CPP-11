#include <iostream>
class Expr {
public:
  Expr() {}
  Expr(const Expr&) {}
  virtual Expr* new_expr() =0;
  virtual Expr* clone() =0;
};

class Cond : public Expr {
public:
  Cond() {}
  Cond(const Cond&) {}
  Cond* new_expr() override { return new Cond{}; }
  Cond* clone() override { return new Cond(*this); }
};

void user(Expr* p)
{
  Expr* p2 = p->new_expr();
}

int main()
{
  Cond c;
  user(&c);
}
