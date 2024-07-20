#include "plorg.h"
#include <cstring>
#include <iostream>
plorg::plorg(const char * ch)
{
    strcpy(name_, ch);
    CI_ = 50;
}
void plorg::change_CI(int CI)
{
    CI_ = CI;
}
void plorg::show()const
{
    std::cout << "name: " << name_ 
              << " CI: " << CI_ << std::endl;
}