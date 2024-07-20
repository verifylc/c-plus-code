#include <iostream>
#include "bank.h"
int main()
{
    bank *b = new bank[3];
    b[0] = bank("curry", " basketball", 800.9);
    b[1] = bank("c", "football", 1000.50);
    b[2] =  bank(); 
    b[0].show();
    b[1].show();
    b[2].show();
    b[0].deposit(50);
    b[1].deposit(10);
    b[2].deposit(1);
    b[0].show();
    b[1].show();
    b[1].withdraw(1200);
    b[1].show();
    b[0].withdraw(100);
    b[0].show();
    delete [] b;
}