constexpr double PI = 3.14159;  // PI constant
constexpr double e = 2.71828;   // Euler's constant

constexpr double constant(char c)
{
  return c == 'p'? PI : e;
}

int main()
{
  constexpr char p = 'p';
  constant(p);
}

