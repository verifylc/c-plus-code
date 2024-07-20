#include "Person.h"
#include <iostream>
#include <cstring>
Person::Person(const std::string & ln, const char * gn)
{
   lname = ln;
   strcpy(fname, gn); 
}
void Person::Show() const
{
    std::cout << "name: " << lname << " " << fname << std::endl;
}
void Person:: FormalShow() const
{
    std::cout << "name " << fname << ", " << lname << std::endl;
}
