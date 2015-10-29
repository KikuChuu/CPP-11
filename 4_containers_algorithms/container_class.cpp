class Container {
public:
  virtual double& operator[](int) =0;
  virtual int size() =0;
  virtual ~Container() {}
};

void use(Container& c)
{
  const int sz = c.size();

  for (int i = 0; i < sz; ++i)
    cout << c[i] << '\n';
}
