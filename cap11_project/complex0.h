#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
class complex
{
    private:
      double a,b;
    public:
      complex(double x, double y);
      complex();
      complex operator+(const complex c) const;
      complex operator-(const complex c) const;
      complex operator*(const complex c) const;
      complex operator*(int n) const;
      complex operator~() const;
      friend complex operator*(int n, const complex c){return c*n;}
      friend std::ostream & operator<<(std::ostream & OS, const complex & c);
      friend std::istream & operator>>(std::istream & IS, complex & c);

};
#endif