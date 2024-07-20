#include <iostream>
#include "move.h"
int main()
{ 
    move m1 = move(2, 4);
    move m2 = move(4, 6);
    move m3;
    using namespace std;
    cout << "m1: ";
    m1.showmove();
    cout << "m2: ";
    m2.showmove();
    cout << "m3: ";
    m3.showmove();
    cout << "use m1 add: ";
    m3 = m1.add(m2);
    m3.showmove();
    cout << "m1 reset: ";
    m1.reset();
    m1.showmove();     
}