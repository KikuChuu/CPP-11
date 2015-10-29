#include <iostream>

using namespace std;

enum class Color {red, blue, green};

Color& operator++(Color& c)
{
  switch (c) {
  case Color::red:   return c = Color::blue;
  case Color::blue:  return c = Color::green;
  case Color::green: return c = Color::red;
  }
}

ostream& operator<<(ostream& os, Color& c)
{
  switch (c) {
  case Color::red:   cout << "red\n"; break;
  case Color::blue:  cout << "blue\n"; break;
  case Color::green: cout << "green\n"; break;
  }
}
void f(Color& c)
{
  cout << ++c;
}

int main()
{
  Color c;
  for (int i = 0; i < 100; ++i) 
    f(c);
}
