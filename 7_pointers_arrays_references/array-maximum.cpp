int arrayMax(int* A, int n)
{
  int currentMax = A[0];
  for (int i = 1; i < n - 1; i++)
    if (currentMax < A[i])
      currentMax = A[i];
  return currentMax;
}

int main()
{

}
