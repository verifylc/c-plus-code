#include "port.h"
#include <cstring>
port::port(const char * br, const char * st, int b)
{
    brand = new char[strlen(br)+1];
    strcpy(brand, br);
    strncpy(style, st, 20);
    bottles = b;
}
port::port(const port & p)
{
    brand = new char[strlen(p.brand)+1];
    strcpy(brand, p.brand);
    strncpy(style, p.style, 20);
    bottles = p.bottles;
}
port & port::operator=(const port & p)
{
    if(this == &p)
      return *this;
    brand = new char[strlen(p.brand)+1];
    strcpy(brand, p.brand);
    strncpy(style, p.style, 20);
    bottles = p.bottles;
    return *this;
}
port & port::operator+=(int b)
{
    bottles += b;
    return *this;
}
port & port::operator-=(int b)
{
    bottles -= b;
    return *this;
}
void port::show()const
{
    std::cout << "brand: " << brand;
    std::cout << "\nKind: " << style;
    std::cout << "\nbottles: " << bottles << std::endl;
}
std::ostream & operator<<(std::ostream & os, const port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

vintageport::vintageport()
:port(){
  nickname = nullptr;
  year = 0;
}
vintageport::vintageport(const char * br, int b, const char * nn, int y)
:port(br, "default" ,b){
    nickname = new char[strlen(nn)+1];
    strcpy(nickname, nn);
    year = y;
}
vintageport::vintageport(const vintageport& vp)
:port(vp)
{
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}
vintageport& vintageport::operator=(const vintageport & vp)
{
    if(this == &vp)
      return *this;
    port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return * this;
}
void vintageport::show()const
{
    port::show();
    std::cout << "Nickname: " << nickname;
    std::cout << "\nyear: " << year << std::endl;
}
std::ostream & operator<<(std::ostream & os, const vintageport & vp)
{
    os << (const port &)vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}

