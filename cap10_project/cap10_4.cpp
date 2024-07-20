#include <iostream>
#include "sale.h"
int main()
{
    double ar[3] = {11.1, 12.2, 13.3};
    sale s1 = sale(ar, 3);
    s1.showSales();
    s1.setSales();
    s1.showSales();
}