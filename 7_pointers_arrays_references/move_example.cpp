#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
  T tmp {static_cast<T&&>(a)};
  a = static_cast<T&&>(b);
  b = static_cast<T&&>(tmp);
}


int main()
{
  int a {10};
  int b {20};
  
  std::cout << "{" << a << ',' << b << "}\n";
  swap(a,b);
  
  std::cout << "{" << a << ',' << b << "}\n";
  
}
