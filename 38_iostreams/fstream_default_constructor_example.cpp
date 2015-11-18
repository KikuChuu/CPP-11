#include <fstream>
#include <iostream>
using namespace std;

void foo(const string& fname)
{
  fstream fs {};
  fs.open(fname, ios::out);
  if (fs.is_open()) {
    string msg = "Hello, default-constructed filestream!\n";
    fs << msg;
  } else {
    cerr << "Error: " << fname << " could not be opened\n";
  }
  fs.close();
}

int main()
{
  string input = "FDCE_input.txt";
  foo(input);
}
