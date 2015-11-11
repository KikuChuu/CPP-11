enum E1 {a,b};
enum class E2 {a,b};

void f(E1 x, E2 y)
{
  if (x) {} // ok
//  if (y) {} // error
  if (y == E2::a) {} // ok
}

int main()
{
  E1 x;
  E2 y;
  f(x,y);
}
