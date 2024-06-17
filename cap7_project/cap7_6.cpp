#include <iostream>
using namespace std;
int fill_array(double *array, int size);
void show_array(const double array[], int size);
void reverse_array(double array[], int start, int size);
int main()
{
   int size;
   cout << "Enter array size: ";
   while(!(cin >> size))
   {
       cin.clear();
       while(cin.get() != '\n')
           continue;
       cout << "bad input, please a num:";
   } 
   double *arr = new double[size];
   size = fill_array(arr, size);
   cout << "actual size: " << size <<endl;
   show_array(arr, size);
   reverse_array(arr, 0, size);
   cout << "reverse after value:\n";
   show_array(arr, size);
   reverse_array(arr, 1, size);
   cout << "reverse (expect first and last element)after value:\n";
   show_array(arr, size);
   delete [] arr;
   cout << "END!\n";
}
int fill_array(double *array, int size)
{
    for(int i=0;i<size;i++)
    {   
        cout << "Enter array value #" << i << " :";
        if(!(cin >> array[i]))
        {
            cin.clear();
            cout << "bad input , before quit\n";
            return i;
            break;
        }
    }
    return size;
}
void show_array(const double array[], int size)
{
   for(int i;i<size;i++)
   {
       cout << "array #"<< i << ": "<< array[i] << endl;
   }
}
void reverse_array(double array[], int start, int size)
{
    double tmp_val;
    for(int i=start;i< size/2;i++)
    {
        tmp_val = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = tmp_val;
    }
}
