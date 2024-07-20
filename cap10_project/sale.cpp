#include "sale.h"
#include <iostream>
sale::sale(const double ar[], int n)
{
    int i;
    double sum=0.0;
    min_ = ar[0];
    max_ = ar[0]; 
    for(i =0;i<(n>QUARTERS ? QUARTERS: n);i++)
    {
        sales_[i] = ar[i];
        sum += sales_[i];
        if(min_ > sales_[i])
            min_ = sales_[i];
        if(max_ < sales_[i])
            max_ = sales_[i];
    }
    average_ = sum/i;
    while(i<4)
    {
        sales_[i] = 0;
        i++;
    }
}
void sale::setSales()
{
    double sum=0.0;
    double sales[QUARTERS];
    for(int i=0;i<QUARTERS;i++)
    {
        std::cout << "Enter the #" << i << "sales:";
        std::cin >> sales[i];
    }
    *this = sale(sales, QUARTERS);
}
void sale::showSales()const
{
    using std::cout;
    using std::endl;
    for(int i=0;i<QUARTERS;i++)
    {
        cout << "s.sales[" << i << "]: " << sales_[i] << endl;
    }
    cout << "s.average: " << average_ << endl;
    cout << "s.max: " << max_ << endl;
    cout << "s.min: " << min_ << endl;
}