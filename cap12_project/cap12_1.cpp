#include <iostream>
#include "Cow.h"
int main()
{
    using std::cout;
    Cow c1;
    Cow c2("Paris", "pingpong", 75.7);
    cout << "C1: ";
    c1.ShowCow();
    cout << "C2: ";
    c2.ShowCow();
    c1 = c2;
    cout << "C1 = C2, C1: ";
    c1.ShowCow();
    cout << "C2: ";
    c2.ShowCow();
}