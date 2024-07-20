#include <iostream>
#include  <cstring>
#include "golf.h"
golf::golf(const char * name, int hc)
{
    strcpy(fullname_, name);
    handicap_ = hc;
}
int golf::setgolf()
{
    using std::cout;
    using std::cin;
    char fullname[Len];
    int handicap;  
    cout << "Enter fullname: ";
    cin.getline(fullname, Len);
    if(fullname[0] == '\0')
    {
        return 0;
    }
    cout << "Enter handicap: ";
    cin >> handicap;
    cin.get();
    *this = golf(fullname, handicap);
    return 1;
}
void golf::handicap(int hc)
{
  handicap_ = hc;
}
void golf::showgolf()const
{
   std::cout << "golf fullname: " << fullname_ << " handicap: " << handicap_ << std::endl;
}