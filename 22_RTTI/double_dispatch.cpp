#include <vector>
#include <utility>
#include <iostream>
using namespace std;

class Circle;
class Triangle;

class Shape {
public:
  virtual bool intersect(const Shape&) const =0;
  virtual bool intersect(const Circle&) const =0;
  virtual bool intersect(const Triangle&) const =0;
};

bool Shape::intersect(const Shape&) const
{
  return false;
}
bool Shape::intersect(const Circle&) const
{
  return false;
}
bool Shape::intersect(const Triangle&) const
{
  return false;
} 

class Circle : public Shape {
public:
  bool intersect(const Shape&) const override;
  bool intersect(const Circle&) const override;
  bool intersect(const Triangle&) const override;
};

bool Circle::intersect(const Shape& s) const { return s.intersect(*this); }
bool Circle::intersect(const Circle& c) const {cout << "intersect(circle,circle)\n"; return true; }
bool Circle::intersect(const Triangle& t) const { cout << "intersect(circle,triangle)\n"; return true; }

class Triangle : public Shape {
public:
  bool intersect(const Shape&) const override;
  bool intersect(const Circle&) const override;
  bool intersect(const Triangle&) const override;
};

bool Triangle::intersect(const Shape& s) const 
{
  return s.intersect(*this);
}

bool Triangle::intersect(const Circle& c) const
{
  cout << "intersect(triangle,circle)\n"; return true;
}

bool Triangle::intersect(const Triangle& t) const
{
  cout << "intersect(triangle,triangle)\n"; return true;
}

void test(Triangle& t, Circle& c)
{
  vector<pair<Shape*,Shape*>> vs { {&t,&t}, {&t,&c}, {&c,&t}, {&c,&c} };
  for (auto p : vs)
    p.first->intersect(*p.second);
}

int main()
{
  Triangle t;
  Circle c;
  test(t,c);
}
