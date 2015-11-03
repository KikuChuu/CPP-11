#include <iostream>
#include <memory>
using namespace std;

class Node {
public:
  Node();
  Node(int data);
  ~Node();

  int data() const;
  Node* link() const;

  void set_data(const int data);
  void set_link(Node* link);
  void print() const;
private:
  int __data{0};
  Node* __link;
};

void Node::print() const
{
  cout << __data << " ";
}

Node::Node()
{
}

Node::Node(int data)
{
  __data = data;
}

void Node::set_data(const int data)
{
  __data = data;
}

void Node::set_link(Node* link)
{
  __link = link;
}

int Node::data() const
{
  return __data;
}

Node* Node::link() const
{
  return __link;
}

Node::~Node()
{
  cout << "Destructing " << __PRETTY_FUNCTION__ << '\n'; 
}

int main()
{
  Node n;
  n.print();
}
