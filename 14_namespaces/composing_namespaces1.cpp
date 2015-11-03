namespace X {
  int i,j,k;
};

//int k;

void f()
{
  int i = 0;
  using namespace X;
  i++;
  j++;
  k++;
}
int main()
{
  f();
}
