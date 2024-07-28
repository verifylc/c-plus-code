#include <iostream>
#include "stone_1.h"
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    stone ar[6] = {30.5, 10.5, 50.0};
    for(int i =0;i<3;i++)
    {
        double st;
        cout << "please ar[" << i+3 << "]: ";
        cin >> st;
        ar[i+3] = stone(st);
    }
    stone max = ar[0];
    stone min = ar[0];
    int num = 0;
    for(int i = 0; i< 6; i++)
    {
        if(ar[i] > max)
          max = ar[i];
        if(ar[i] < min)
          min = ar[i];
        if(ar[i] > stone(11))
          num++;
    }
    cout << "max : " << max ;
    cout << "min : " << min ;
    cout << "ar[i] > 11 nums:" << num << endl; 
}