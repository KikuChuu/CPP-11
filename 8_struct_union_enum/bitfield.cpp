struct PPN {
  unsigned int PFN : 22; // Page frame number
  int : 3; // unused
  unsigned int CCA : 3;
  bool nonreachable : 1;
  bool dirty : 1;
  bool valid : 1;
  bool global: 1;
};


int main()
{

}
