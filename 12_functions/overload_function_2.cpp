float sqrt(float);
double sqrt(double);

float sqrt(float f) {}
double sqrt(double d) {}

void f(double da, float fla)
{
  float fl = sqrt(da);
  double d = sqrt(da);
  fl = sqrt(fla);
  d = sqrt(fla);
}

int main()
{
  f(1.0, 1.0F);
}
