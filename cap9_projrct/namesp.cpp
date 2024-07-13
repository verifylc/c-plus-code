#include <iostream>
#include "namesp.h"
namespace SALE
{

void setSales(Sales &s, const double ar[], int n)
{
    int i;
    double sum=0.0;
    s.min = ar[0];
    s.max = ar[0]; 
    for(i =0;i<(n>QUARTERS ? QUARTERS: n);i++)
    {
        s.sales[i] = ar[i];
        sum += s.sales[i];
        if(s.min > s.sales[i])
            s.min = s.sales[i];
        if(s.max < s.sales[i])
            s.max = s.sales[i];
    }
    s.average = sum/i;
    while(i<4)
    {
        s.sales[i] = 0;
        i++;
    }
}
void setSales(Sales & s)
{
    using std::cout;
    using std::cin;
    double sum=0.0;
    for(int i=0;i<QUARTERS;i++)
    {
        cout << "Enter the #" << i << "sales:";
        cin >> s.sales[i];
        sum += s.sales[i];
        s.max = (i==0) ? s.sales[i] : (s.max < s.sales[i] ? s.sales[i] : s.max);
        s.min = (i==0) ? s.sales[i] : (s.min > s.sales[i] ? s.sales[i] : s.min);
    }
    s.average = sum/QUARTERS;
}
void showSales(const Sales & s)
{
    using std::cout;
    using std::endl;
    for(int i=0;i<QUARTERS;i++)
    {
        cout << "s.sales[" << i << "]: " << s.sales[i] << endl;
    }
    cout << "s.average: " << s.average << endl;
    cout << "s.max: " << s.max << endl;
    cout << "s.min: " << s.min << endl;
}
}