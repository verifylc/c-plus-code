#include <iostream>
#include "list.h"
void cal_add2(Item & n);
int main()
{
    using namespace std;
    list li;
    li.show();
    li.additem(4);
    li.additem(5);
    li.additem(6);
    li.show();
    li.visit(cal_add2);
    li.show();
}
void cal_add2(Item & n)
{
    n +=2;
}
