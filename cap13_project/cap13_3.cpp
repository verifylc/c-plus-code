#include <iostream>
#include <string>
#include "abc.h"
const int CLIENTS = 4;
int main()
{
    using namespace std;
    basedma shirt("base", 8);
    lacksdma ballon("red", "lack", 4);
    hasdma map("hh", "has", 78);

    cout << shirt << endl;
    cout << ballon << endl;
    cout << map << endl;

    lacksdma ballon2(ballon);
    hasdma map2;
    map2 = map;
    cout << ballon2 << endl;
    cout << map2 << endl;

    abc* pts[3];
    pts[0] = &shirt;
    pts[1] = &ballon;
    pts[2] = &map;
   
    //only have abc attrubect
    for(int i =0; i<3; i++)
      cout << *pts[i] << endl;

    for(int i =0; i<3; i++)
      pts[i] ->view();  
}