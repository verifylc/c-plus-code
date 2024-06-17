#include <iostream>
using namespace std;
const int size =4;
struct expense
{
    double ex[size];
};
const char * seasons[4] = {"Spring", "Summer", "Fall", "Winter"};
void fill(expense * ar);
void show(expense *ar);
int main()
{
    expense exp;
    fill(&exp);
    show(&exp);
} 
void fill(expense * ar)
{
    for(int i=0; i<size; i++)
    {
       cout << "ENter " << seasons[i] << " expenses: ";
       cin >> ar->ex[i];
    }
}
void show(expense *ar)
{
    double total = 0;
    cout << "\nEXPENSE\n";
    for(int i =0; i< size; i++)
    {
        cout << seasons[i] << ": $" << ar->ex[i] << endl;
        total += ar->ex[i];
    }
    cout << "Total ExpenseL $" << total << endl; 
}