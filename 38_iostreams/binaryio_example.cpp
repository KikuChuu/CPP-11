#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
char* as_bytes(T& i)
{
  return reinterpret_cast<char*>(&i); // treat that memory as bytes
}

void write_hello()
{
  string i = "Hello";
  ofstream ofs("binary_output.txt",ios_base::binary);
  if (ofs.is_open())
    ofs << i.c_str();
}

void read_hello()
{
  char* buf = new char[10]();
  ifstream ifs("binary_output.txt", ios_base::binary);
  if (ifs.is_open())
    ifs >> buf;
  string s(buf);
  cout << s << '\n'; 
}
int main()
{
  write_hello();
  read_hello();
}
