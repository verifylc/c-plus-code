#include <iostream>
using namespace std;
const char * seasons[4] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double * ar, int size);
void show(double *ar, int size);
int main()
{
    const int size =4;
    double expenses[size];
    fill(expenses, size);
    show(expenses, size);
} 
void fill(double * ar, int size)
{
    for(int i=0; i<size; i++)
    {
       cout << "ENter " << seasons[i] << " expenses: ";
       cin >> ar[i];
    }
}
void show(double *ar, int size)
{
    double total = 0;
    cout << "\nEXPENSE\n";
    for(int i =0; i< size; i++)
    {
        cout << seasons[i] << ": $" << ar[i] << endl;
        total += ar[i];
    }
    cout << "Total ExpenseL $" << total << endl; 
}