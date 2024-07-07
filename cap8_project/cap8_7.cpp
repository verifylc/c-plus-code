#include <iostream>
using namespace std;
template <typename T>
T SunArray(T *arr, int n);

template <typename T>
T SunArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amout;
};
int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Tma Wokfe", 2400.0},
        {"Ura Eoxe", 1300.0},
        {"Iby stout", 1800.0}
    };
    double * pd[3];
    for(int i =0;i<3;i++)
      pd[i] = &mr_E[i].amout;

    cout << "listing Mr. E's conuts of things:\n";
    cout << SunArray(things, 6) << endl;
    cout << "listing Mr. E;s debts:\n";
    cout << SunArray(pd, 3) << endl;
    return 0;
}
template <typename T>
T SunArray(T *arr, int n)
{
    T sum ;
    cout << "template A\n";
    for(int i =0;i <n;i++)
      sum += arr[i];
    return sum;
}
template <typename T>
T SunArray(T * arr[], int n)
{
    T sum;
    cout << "template B:\n";
    for(int i =0;i <n;i++)
      sum += *arr[i];
    return sum; 
}
