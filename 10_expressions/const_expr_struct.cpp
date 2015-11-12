struct Point {
  int x,y,z;
  constexpr Point up(int d) { return {x,y,z+d}; }
  constexpr Point move(int dx, int dy) { return {x+dx, y+dy}; }
};


int main()
{

constexpr Point origo {0,0};
constexpr int z = origo.x;

constexpr Point a[] = {
  origo, Point{1,1}, Point{2,2}, origo.move(3,3)
};

constexpr int x = a[1].x;
}
