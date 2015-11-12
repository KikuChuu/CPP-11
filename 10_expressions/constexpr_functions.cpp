#include "isqrt.h"

struct Point {
  int x,y,z;
  constexpr Point up(int d) { return {x,y,z+d}; }
  constexpr Point move(int dx, int dy) { return {x+dx,y+dy}; }
};

constexpr int square(int x)
{
  return x*x;
}

constexpr int radial_distance(Point p)
{
  return isqrt(square(p.x)+square(p.y)+square(p.z));
}

int main()
{
  constexpr Point p1 {10,20,30};
  constexpr Point p2 {p1.up(20)};
  constexpr int dist = radial_distance(p2);
}
