
#include <iostream>
#include "golf.h"

void setgolf(golf & g, const char* name,int hc)
{   
    memcpy(g.fullname, name, Len);
    g.handicap = hc;

}
int setgolf(golf & g)
{
    using std::cout;
    using std::cin;
    //using std::endl;    
    cout << "Enter fullname: ";
    cin.getline(g.fullname, Len);
    if(g.fullname[0] == '\0')
    {
        return 0;
    }
    cout << "Enter handicap: ";
    cin >> g.handicap;
    cin.get();
    return 1;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf & g)
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "golf fullname: " << g.fullname << " handicap: " << g.handicap << endl;
}