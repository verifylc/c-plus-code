#include "CD2.h"
#include <cstring>
#include <iostream>
Cd::Cd(char * s1, char * s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    label = new char[strlen(s2)+1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime; 
}
Cd::Cd()
{
    performers = new char[8];
    label = new char[8];
    strcpy(performers, "default");
    strcpy(label, "default");
    selections = 0;
    playtime = 0;
}
Cd::~Cd()
{
   delete [] performers;
   delete [] label;
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
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime; 
    return *this;
}
Classic::Classic(char *s0, char * s1, char * s2, int n, double x)
: Cd(s1, s2, n, x)
{
     band = new char[strlen(s0)+1];
     strcpy(band, s0);   
}
Classic::Classic()
:Cd()
{
    band = new char[8];
    strcpy(band, "default");
}
Classic::~Classic()
{
    delete [] band;
}
void Classic::Report()const
{
    Cd::Report();
    std::cout << "band " << band << std::endl;
}



