#include "complex.h"

complex::complex(double r, double i) : re{r}, im{i} {} // construct complex from two scalars
complex::complex(double r) : re{r}, im{0} {} // construct complex from one scalar
complex::complex() : re{0}, im{0} {} // default complex {0,0}

double complex::real() const 
{ 
  return re; 
}

void complex::real(double r) 
{ 
  re = r; 
}

double complex::imag() const 
{ 
  return im; 
}

void complex::imag(double i) 
{ 
  im = i; 
}

// add to re and im
complex& complex::operator+=(complex z) 
{ 
  re+=z.re; 
  im+=z.im; 
  return *this; 
}

// and return the result
complex& complex::operator-=(complex z)
{ 
  re-=z.re; 
  im-=z.im; 
  return *this; 
} 

complex& complex::operator*=(complex z)
{
  re *= z.re;
  im *= z.im;
  return *this;
}

complex& complex::operator/=(complex z)
{
  re /= z.re;
  im /= z.im;
  return *this;
}
//=============================================================================
//*****************************************************************************
//------------------------ OTHER USEFUL OPERATORS -----------------------------
//---------- THAT DO NOT REQUIRE ACCESS TO COMPLEX's REPRESENTATION -----------
//*****************************************************************************
//=============================================================================

complex operator+(complex a, complex b)
{ 
  return a+=b; 
}

complex operator-(complex a, complex b) 
{ 
  return a-=b; 
}

complex operator-(complex a) 
{ 
  return {-a.real(), -a.imag()}; 
}

complex operator*(complex a, complex b) 
{ 
  return a*=b; 
}

complex operator/(complex a, complex b) 
{ 
  return a/=b; 
}

bool operator==(complex a, complex b) // equal
{
  return a.real()==b.real() && a.imag()==b.imag();
}

bool operator!=(complex a, complex b) // not equal
{
  return !(a==b);
}
