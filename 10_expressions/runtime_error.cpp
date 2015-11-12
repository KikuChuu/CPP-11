#include <stdexcept>

using namespace std;

char checked_cast(int i)
{
  char c = i;
  if (i != c) throw std::runtime_error{"int-to-char checked failed"};
  return c;
}

void my_code(int i)
{
  char c= checked_cast(i);
}

int main()
{
  my_code(1000);
}
