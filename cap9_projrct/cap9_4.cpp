#include <iostream>
#include "namesp.h"
int main()
{
    using namespace SALE;
    Sales s1;
    double ar[3] = {11.1, 12.2, 13.3};
    setSales(s1, ar, 3);
    showSales(s1);
    setSales(s1);
    showSales(s1);
}