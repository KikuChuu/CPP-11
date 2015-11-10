struct List;

struct Link {
  Link* pre;
  Link* suc;
  List* member_of;
  int data;
};

struct List {
  Link* head;
};

int main()
{

}
