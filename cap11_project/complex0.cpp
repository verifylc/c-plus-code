#include "complex0.h"
complex::complex()
{
    a=b=0.0;
}
complex::complex(double x, double y)
{
    a =x;
    b =y;
}
complex complex:: operator+(const complex c) const
{
    double x,y;
    x= a+c.a;
    y= b+c.b;
    return complex(x,y);
}
complex complex:: operator-(const complex c) const
{
    double x,y;
    x= a-c.a;
    y= b-c.b;
    return complex(x,y);
}
complex complex:: operator*(const complex c) const
{
    double x,y;
    x= a*c.a - b*c.b;
    y= a*c.b + b*c.a;
    return complex(x,y);
}
complex complex:: operator*(int n ) const
{
    double x,y;
    x= a*n;
    y= b*n;
    return complex(x,y);
}
complex complex:: operator~() const
{
    double x,y;
    x= a;
    y= -b;
    return complex(x,y);
}
std::ostream & operator<<(std::ostream & OS, const complex & c)
{
    OS << "(" << c.a <<", " << c.b << "i)\n";
    return OS;
}
std::istream & operator>>(std::istream & IS, complex & c)
{
    std::cout << "please enter num a:";
    if(!(IS >> c.a))
      return IS;
    std::cout << "please enter num b:";
    IS >> c.b;

    return IS;
}