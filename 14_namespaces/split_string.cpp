#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string& s)
{
  vector<string> res;
  istringstream iss(s);
  for (string buf; iss >> buf;)
    res.push_back(buf);
  return res;
}

void split_and_print(const string& s)
{
  vector<string> res = split(s);
  for (auto& s : res)
    cout << s << '\t';
  cout << '\n';
}

int main(int argc, char* argv[])
{
  if (argc == 2) {
    string s = argv[1]; 
    split_and_print(s);
  }
  else 
    return -1;
}
