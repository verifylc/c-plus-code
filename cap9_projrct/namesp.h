#ifndef NAMESP__H
#define NAMESP__H
namespace SALE
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales &s, const double ar[], int n);
    void setSales(Sales & s);
    void showSales(const Sales & s);
}
#endif