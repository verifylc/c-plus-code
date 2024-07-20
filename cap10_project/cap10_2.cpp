#include <iostream>
#include "Person.h"
int main()
{
    Person p = Person();
    Person p_1 = Person("curry", "sten");
    p.FormalShow();
    p.Show();
    p_1.FormalShow();
    p_1.Show();
}