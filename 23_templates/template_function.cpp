template<typename T>
T* create()
{
  return new T{};
}

int main()
{
  create<int>();
}
