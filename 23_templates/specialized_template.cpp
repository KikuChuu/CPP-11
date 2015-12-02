template<int>
struct int_exact_traits { // 
  using type = int;
};

template<>
struct int_exact_traits<8> {
  using type = char;
};

template<>
struct int_exact_traits<16> {
  using type = short;
};

template<int N>
using int_exact = typename int_exact_traits<N>::type;

void f()
{
  int_exact<8> a = 7;
}

int main() 
{
  f();
}
