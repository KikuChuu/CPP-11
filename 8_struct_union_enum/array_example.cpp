#include <iostream>
#include <array>
#include <utility>

using namespace std;

struct Point {
  int x,y;
};

using Array = array<Point,3>;

void print_points(int x, int y)
{
  cout << x << ':' << y << '\n';
} 

Array shift(Array a, Point p)
{
  for (int i = 0; i!= 3; ++i) {
    a[i].x += p.x;
    a[i].y += p.y;
  }
  return a;
}

void f()
{
//  Array points {{1,2},{3,4}};
  Array points {1,2,3,4,5,6};
  int x2 = points[2].x;
  int y2 = points[2].y;
  print_points(x2,y2);
  Array ax = shift(points,{10,20});
  print_points(x2,y2);
}

int main()
{ 
  f();
}
