#include "Cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{    
    strcpy(name,"C++");
    weight = 0.0;
    static const char * tmp = "default";
    hobby = new char [strlen(tmp)+1];
    strcpy(hobby, tmp);
    std::cout << "Cow()\n";
}
Cow::Cow(const char *nm, const char*ho, double wt)
{
    strcpy(name, nm);
    hobby = new char [strlen(ho)+1];
    strcpy(hobby, ho);
    weight = wt;
    std::cout << "Cow(nm, ho, wt)\n";
}
Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char [strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    std::cout << "Cow(Cow c)\n";
}
Cow::~Cow()
{
    delete [] hobby;
    std::cout << "~Cow()\n";
}
Cow & Cow::operator=(const Cow & c)
{
    if (this== &c)
        return *this;
    delete [] hobby;
    hobby = new char [strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    strcpy(name, c.name);
    weight = c.weight;
    return *this;
    std::cout << "operator=";
}
void Cow::ShowCow() const
{
    std::cout << "name: " << name << " hobby: " << hobby 
         << " weight: " << weight << std::endl;
}