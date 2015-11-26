#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class Employee {
public:
  void print() const;
  string full_name() const { return first_name + ' ' + middle_initial + ' ' + family_name; }
private:
  string first_name {"Bob"}, family_name{"Smob"};
  char middle_initial{'A'};
};

void Employee::print() const
{
  cout << "name is " << full_name() << '\n';
}

class Manager : public Employee {
public:
  void print() const;
private:
  short level{2};
};

void Manager::print() const 
{
  Employee::print();
  cout << level << '\n';
}

int main()
{
  Employee e;
  Manager m;
  e.print();
  m.print();
}
