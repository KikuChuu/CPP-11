#include <iostream>
#include <stdexcept>
using namespace std;

void m()
{
  try {
    throw exception{};
  }
  catch (...) {
    cerr << "Threw an exception \n";
  }
}


int main()
{
  m();
}
