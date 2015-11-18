#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  //string fname = "../hellooutput";
  //string fname = "./hellooutput";
  string fname = "../../../../../run/user/1000/gvfs/mtp:host=%5Busb%3A001%2C011%5D/Card/hellooutput.txt";
  ofstream ofs(fname);
  if (!ofs) {
    cerr << "bad state with 'target' for writing\n";
  } else {
    if (ofs.is_open()) {
      string msg = "Hello file stream!\n";
      ofs << msg;
    } else {
      cerr << "couldn't open 'target' for writing\n";
    }
  }
  ofs.close(); 
}
