#include <iostream>
#include <string>
#include <complex>

using namespace std;

union U2 {
  int a;
  const char* p {""};
};

int main() 
{
  U2 u1;
  cout << *(u1.p) << endl;
}
