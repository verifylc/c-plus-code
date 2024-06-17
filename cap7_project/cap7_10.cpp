#include <iostream>
//#include <cstring>
using namespace std;
double add(double x, double y);
double mul(double x, double y);
double calculate(double x, double y, double(*pf)(double, double));
int main()
{
    double(*pf[2])(double, double) = {add, mul};
    double x,y;
    cout << "Enter two num for calculate: ";
    while(cin >> x >> y)
    {
        cout << x << " + " << y << " = " << calculate(x, y, pf[0]) << endl;
        cout << x << " * " << y << " = " << calculate(x, y, pf[1]) << endl;
        cout << "Enter two num fqor calculate: ";
    }
}
double add(double x, double y)
{
    return x+y;
}
double mul(double x, double y)
{
    return x*y;
}
double calculate(double x, double y, double(*pf)(double, double))
{
    return (*pf)(x,y);
}