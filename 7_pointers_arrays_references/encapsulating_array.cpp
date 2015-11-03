#include <iostream>
#include <memory>
#include <utility>
#include <vector>
using namespace std;

unique_ptr<int[]> make_sequence(int n)
{
  unique_ptr<int[]> p {new int[n]};
  for (int i = 0; i < n; i++)
    p[i] = i;
  return p;
}

void print(const vector<int>& v)
{
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  cout << '\n';
}

unique_ptr<int> increment(unique_ptr<int> p)
{
  ++*p;
  return p;
}

void add()
{
  unique_ptr<vector<int>> p1{new vector<int>(10, 100)};
  unique_ptr<vector<int>> p2{new vector<int>(10, 200)};
  unique_ptr<vector<int>> p3{new vector<int>()};
  for (int i = 0; i < p1->size(); i++) {
    p3->push_back(p1->at(i) + p2->at(i));
  }
  print(*p3);
}

int main()
{
  add();
  unique_ptr<int> p{new int(10)};
  cout << *increment(move(p));
  
}
