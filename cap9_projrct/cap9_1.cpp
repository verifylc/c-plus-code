#include <iostream>
#include "golf.h"
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    golf ann;
    setgolf(ann, "ann biradfree", 24);
    showgolf(ann);
    handicap(ann, 48);
    showgolf(ann);
    golf g[5];
    for(int i=0;i<5;i++)
    {
       cout << "the #" << i<<endl;
       if(!setgolf(g[i])) break;

    }
    for(int i=0;i<5;i++)
    {
       cout << "the #" << i<< endl;
       showgolf(g[i]);  
    }
}