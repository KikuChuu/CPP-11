class vector {
public:
  vector(int s);

private:
  double* elem; //  elem points to an array of sz doubles
  int sz;       //  sz is non-negative
};

vector::vector(int s)
{
  if (s < 0) throw Bad_size{s};
  sz = s;
  elem = new double[s];
}
