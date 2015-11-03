#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

void increment(int &p)
{
  ++p;
}

int next(int p)
{
  return p + 1;
}

void print_int(int x)
{
  cout << x << '\n';
}


template<typename K, typename V>
class Map {
public:
  V& operator[](const K&);
  pair<K,V>* begin() { return &elem[0]; }
  pair<K,V>* end() {return &elem[0] + elem.size(); }
private:
  vector<pair<K,V>> elem;
};

template<typename K, typename V>
V& Map<K,V>::operator[](const K& k)
{
  for (auto& p : elem) 
    if (p.first == k)
      return p.second;

  elem.push_back({k,V{}});
  return elem.back().second;
}

int main()
{
  Map<string, int> buf;

  string s;
  cin >> s;
  while (s.compare("stop") != 0) {
    ++buf[s];
    cin >> s;
  }

  for (const auto& x : buf)
    cout << x.first << ':' << x.second << '\n'; 
}

