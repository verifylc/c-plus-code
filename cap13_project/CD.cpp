#include "CD.h"
#include <cstring>
#include <iostream>
Cd::Cd(char * s1, char * s2, int n, double x)
{
    strncpy(performers, s1, 50);
    strncpy(label, s2, 20);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    strncpy(performers, d.performers, 50);
    strncpy(label, d.label, 20);
    selections = d.selections;
    playtime = d.playtime; 
}
Cd::Cd()
{
    strncpy(performers, "default", 50);
    strncpy(label, "default", 20);
    selections = 0;
    playtime = 0;
}
Cd::~Cd()
{

}
void Cd::Report()const
{
   std::cout << "performaces: " << performers;
   std::cout << "\nlabel: " << label;
   std::cout << "\nselection: " << selections;
   std::cout << "\nsplaytime: " << playtime <<std::endl;
}
Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
      return *this;
    strncpy(performers, d.performers, 50);
    strncpy(label, d.label, 20);
    selections = d.selections;
    playtime = d.playtime; 
    return *this;
}
Classic::Classic(char *s0, char * s1, char * s2, int n, double x)
: Cd(s1, s2, n, x)
{
     strncpy(band, s0, 50);   
}
Classic::Classic()
:Cd()
{
  strncpy(band, "default",50);
}
void Classic::Report()const
{
    Cd::Report();
    std::cout << "band " << band << std::endl;
}



