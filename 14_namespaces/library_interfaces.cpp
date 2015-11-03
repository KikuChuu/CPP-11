namespace Graph_lib {
  class Shape { /*...*/ };
  class Line : public Shape { /*...*/ };
  class Poly_line : public Shale { /*...*/ };
  class Text : public Shale { /*...*/ };

  Shape operator+(const Shape&, const Shape&);
  Graph_reader open(const char*);
}
