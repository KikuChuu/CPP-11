#include <iostream>

struct Point {
  int x,y;
};

struct Array {
  Point elem[3];
};

int main()
{
  Point points[3] {{1,2},{3,4},{5,6}};
  int x2 = points[2].x;

  Array points2 {{1,2},{3,4},{5,6}};
  int y2 = points2.elem[2].y;
  std::cout << x2 << ':' << ' ' << '\n';
}
