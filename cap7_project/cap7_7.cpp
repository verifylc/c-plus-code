#include <iostream>
using namespace std;
const int MAX = 5;
double * fill_array(double *ar_start, double *ar_end);
void show_array(const double * ar_start, const double * ar_end);
void revalue(double r, double *ar_start, double *ar_end);
int main()
{
    double properties[MAX];
    double * ar_end = fill_array(properties, properties+MAX);
    show_array(properties, ar_end);
    if(properties != ar_end)
    {
        cout << "ENter revalution factor: ";
        double factor;
        while(!(cin>>factor))
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout << "bad input; please enter a num:";
        }
        revalue(factor, properties, ar_end);
        show_array(properties, ar_end);
    }
    cout << "END\n";
}
double * fill_array(double *ar_start, double *ar_end)
{
    double tmp;
    double * i;
    for(i= ar_start;i != ar_end; i++)
    {
        cout << "Enter value # " << i << ": ";
        cin >> tmp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input input process terminated.\n";
            break;
        }
        else if(tmp <0)
          break;
        *i = tmp;
    }
    return i;
}
void show_array(const double * ar_start, const double * ar_end)
{
    const double * i;
    for(i = ar_start; i != ar_end; i++)
    {
        cout << "property  #"<< i << ": " << *i << endl;
    }
}
void revalue(double r, double *ar_start, double *ar_end)
{
    double * i;
    for(i=ar_start; i != ar_end; i++)
    {
       *i  *=r; 
    }
}