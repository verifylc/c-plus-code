#include "abc.h"
#include <iostream>
#include <cstring>
abc::abc(const char * l, int r)
{
    label = new char[strlen(l)+1];
    strcpy(label, l);
    rating = r;
}
abc::abc(const abc & a)
{
    label = new char[strlen(a.label)+1];
    strcpy(label, a.label);
    rating = a.rating;
}
abc::~abc()
{
    delete [] label;
}
void abc::view()const
{
    std::cout << *this << std::endl;
}
abc & abc::operator=(const abc & a)
{
    if(this == &a)
      return *this;
    delete [] label;
    label = new char[strlen(a.label)+1];
    strcpy(label, a.label);
    rating = a.rating;
    return * this;
}
std::ostream & operator<<(std::ostream & os, const abc & a)
{
    os << "label: " << a.label << ", rating: " << a.rating;
    return os; 
}

basedma::basedma(const char *l, int r):abc(l, r)
{

}
std::ostream & operator<<(std::ostream & os, const basedma & b)
{
    os << (const abc &) b;
    return os;
}
lacksdma::lacksdma(const char * c, const char * l, int r):abc(l, r)
{
    strncpy(color, c, COL_LEN);
}
lacksdma::lacksdma(const char *c , const abc & a):abc(a)
{
    strncpy(color, c, COL_LEN);
}
// lacksdma::lacksdma(const lacksdma & rs):abc(rs)
// {
//     strncpy(color, rs.color, COL_LEN);
// }
void lacksdma::view()const
{
    std::cout << *this << std::endl;
}
std::ostream & operator<<(std::ostream & os, const lacksdma & rs)
{
    os << (const abc & ) rs;
    os << ", color: " << rs.color;
    return os;
}

hasdma::hasdma(const char * s, const char * l, int r) 
:abc(l, r){
    style = new char[strlen(s)+1];
    strcpy(style, s);
}
hasdma::hasdma(const char * s, const abc & a)
:abc(a)
{
    style = new char[strlen(s)+1];
    strcpy(style, s);
}
hasdma::hasdma(const hasdma & h)
:abc(h)
{
    style = new char[strlen(h.style)+1];
    strcpy(style, h.style);
}
hasdma::~hasdma()
{
    delete [] style;
}
void hasdma::view()const
{
    std::cout << *this << std::endl;
}
hasdma & hasdma::operator=(const hasdma & h)
{
    if(this == &h)
      return *this;
    delete [] style;
    abc::operator=(h);
    style = new char[strlen(h.style)+1];
    strcpy(style, h.style);
    return *this;    
}
std::ostream & operator<<(std::ostream & os, const hasdma &h)
{
    os << (const abc & ) h;
    os << ", style: " << h.style;
    return os;
}               


