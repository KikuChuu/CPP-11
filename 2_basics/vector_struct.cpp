#include <iostream>

using namespace std;

struct Vector {
  double* elem;
  int sz;
};

void vector_init(const Vector& v, int s)
{
  v.elem = new double[s];
  v.sz = s;
}


// read s integers from cin and return their sum; s is assumed to be positive
int read_and_sum(int s)
{
  Vector v;
  vector_init(v,s);
  
  for (int i = 0; i < s; ++i)
    cin >> v.elem[i];

  double sum = 0.0;
  for (int i = 0; i < s; ++i)
    sum += v.elem[i];

  return sum;  
}
