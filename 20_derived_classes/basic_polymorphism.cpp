#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

class Employee {
public:
  Employee(string fn, short dept) :family_name{fn}, department{dept} {}
  virtual void print() const;
private:
  string first_name, family_name;
  char middle_initial;
  short department;
};

void Employee::print() const 
{
  cout << family_name  << '\t' << department << '\n';
}

class Manager : public Employee {
public:
  Manager(string fn, short dept, short l) : Employee{fn, dept}, level{l} {}
  void print() const;
private:
  list<Employee*> group;
  short level;
};

void Manager::print() const
{
  Employee::print();
  cout << "\tlevel " << level << '\n';
}

void f(const list<Employee*>& s)
{
  for (auto& x : s)
    x->print();
}

int main()
{
  list<Employee*> list {new Employee{"Brown", 1234}, new Manager{"Smith", 1234, 2}};
  f(list); 
}
