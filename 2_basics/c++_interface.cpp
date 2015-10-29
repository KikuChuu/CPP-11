double sqrt(double);

class Vector {
public:
  Vector();
  double& operator[](int i);
  int size() const;
private:
  double* elem;
  int sz;
};
