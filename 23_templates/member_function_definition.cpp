template<typename T>
struct X {
  void mf1() { /*...*/ }    // defined in-class
  void mf2();
};

template<typename T>
void X<T>::mf2() { /*...*/ } // defined out of class

int main() {}
