#ifndef __COMPLEX_H__
#define __COMPLEX_H__

class complex {
  double re, im; // representation: two doubles
public:
  complex(double r, double i); // construct complex from two scalars
  complex(double r); // construct complex from one scalar
  complex(); // default complex {0,0}

  double real() const;
  void real(double r);
  double imag() const;
  void imag(double i);

  complex& operator+=(complex z); // add to re and im  and return the result                                                                      
  complex& operator-=(complex z); 
  complex& operator*=(complex); // defined out-of-class somewhere
  complex& operator/=(complex); // defined out-of-class somewhere 
};

//=============================================================================
//*****************************************************************************
//------------------------ OTHER USEFUL OPERATORS -----------------------------
//---------- THAT DO NOT REQUIRE ACCESS TO COMPLEX's REPRESENTATION -----------
//*****************************************************************************
//=============================================================================
complex operator+(complex a, complex b);
complex operator-(complex a, complex b);
complex operator-(complex a);
complex operator*(complex a, complex b);
complex operator/(complex a, complex b);

bool operator==(complex a, complex b); // equal
bool operator!=(complex a, complex b); // not equal

complex sqrt(complex);
#endif
