#include <iostream>
#include "stone.h"
int main()
{
    using std::cout;
    stone st_1(50.5);
    stone st_2(50, 0.5, stone::s_frac);
    cout << "st_1: " << st_1;
    cout << "st_2: " << st_2;
    cout << "st_1+st_2 " << st_1+st_2;
    cout << "st_1-st_2 " << st_1-st_2;
    cout << "st_1*10 " << st_1 * 10;
    cout << "10*st_2 " << 10 * st_2;
}