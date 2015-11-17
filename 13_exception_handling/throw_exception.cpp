struct Some_error {
/*
  Some_error() {}
  Some_error(Some_error& e) {}
*/
};

void f()
{
  throw Some_error{};
}

int main()
{
  f();
}
