#include <iostream>
#include "golf.h"
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    golf ann = golf("ann biradfree", 24);
    ann.showgolf();
    ann.handicap(48);
    ann.showgolf();
    
    golf g[5];
    for(int i=0;i<5;i++)
    {
       cout << "the #" << i<<endl;
       if(!g[i].setgolf()) break;

    }
    for(int i=0;i<5;i++)
    {
       cout << "the #" << i<< endl;
       g[i].showgolf();  
    }
}