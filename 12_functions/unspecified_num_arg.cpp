#include <iostream>
#include <string>
#include <sstream>
#include <cstdarg>
#include <vector>
using namespace std;

void verify_itoa(int value, const char* str)
{
  ostringstream oss;
  oss << value;
  cout << "Input:  " << value << '\n';
  cout << "Output: " << str << '\n';
}

char* itoa(int value, char* str)
{
  ostringstream oss;
  oss << value;
  int i = 0;
  for (const char& c : oss.str()) {
    str[i] = c;
    i++;
  }
  str[i] = '\0';
 // verify_itoa(value, str);
  return str;
}

void error(int severity ...) // "severity" followed by a zero-terminated list of char*s
{
  va_list ap;
  va_start(ap,severity); // arg startup

  while (true) {
    char* p = va_arg(ap,char*);
    if (p == nullptr) break;
    cerr << p << ' ';
  }

  va_end(ap);
  cerr << '\n';
  if (severity) exit(severity);
}

void error(int severity, initializer_list<string> err)
{
  for (auto& s : err)
    cerr << s << ' ';
  cerr << '\n';
  if (severity) exit(severity);
}

void error(int severity, const vector<string>& err) // almost as before
{
  for (auto& s : err)
    cerr << s << ' ';
  cerr << '\n';
  if (severity) exit(severity);
}

vector<string> arguments(int argc, char* argv[])
{
  vector<string> res;
  for (int i = 0; i != argc; ++i)
    res.push_back(argv[i]);
  return res;
}

void invoke_error1(int argc, char* argv[])
{
  switch(argc) {
  case 1:
    error(0, argv[0], nullptr);
    break;
  case 2:
    error(0, argv[0], argv[1], nullptr);
    break;
  case 3:
    char buffer[8];
    error(1, argv[0], "with", itoa(argc-1, buffer), "arguments", nullptr);
  }
}

void invoke_error2(int argc, char* argv[])
{
  switch (argc) {
  case 1:
    error(0,{argv[0]});
    break;
  case 2:
    error(0,{argv[0],argv[1]});
    break;
  default:
    error(1,{argv[0],"with",to_string(argc-1),"arguments"});
  }
}

void invoke_error3(int argc, char* argv[])
{
  auto args = arguments(argc, argv);
  error((args.size()<2)?0:1, args);
}
int main(int argc, char* argv[])
{
  invoke_error1(argc, argv);
  invoke_error2(argc, argv);
  invoke_error3(argc, argv);
}
