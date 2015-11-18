#include <fstream>
#include <iostream>
using namespace std;

void foo(const string& input))
{
  fstream fs {input, ios::out};
  if (fs.is_open()) {
    string m = "Hello, overload-constructed file stream!\n";
    fs << m;
  } else {
    string m = "Error: " + input + " cannot be opened.\n";
    cerr << m;
  }
  fs.close();
}

int main()
{
  string input = "FOCE_input.txt";
  foo(input);
}
