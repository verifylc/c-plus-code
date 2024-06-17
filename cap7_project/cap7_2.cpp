#include <iostream>
using namespace std;
void fill_array(float *score , int size);
void show_array(const float score[], int size);
float cal_average(const float score[], int size);
int main()
{   
    int size=0;
    cout << "please enter total score's people(less than 10): ";
    while( (!(cin >> size)) || size > 10 || size < 0)
    {
       cin.clear();
       while(cin.get() != '\n')
       {
          continue;
       }
       cout << "bad input, please enter a total num: ";
    }
    float *score = new float [size];
    fill_array(score, size);
    show_array(score, size);
    cout << "aveage value: " << cal_average(score, size) << endl;
    delete [] score;
    cout << "END!\n";
}
void fill_array(float *score , int size)
{
    for(int i=0;i<size;i++)
    {
        cout << "enter score #" << i << endl;
        while(! (cin>> score[i]))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "bad input, please enter a correct num: ";
        }
    }
}
void show_array(const float score[], int size)
{
    for(int i =0;i<size;i++)
    {
        cout << "score #" << i << ": ";
        cout << score[i] <<" ";
    }
    cout << endl;
}
float cal_average(const float score[], int size)
{
    float sum=0;
    for(int i=0;i<size;i++)
    {
        sum += score[i];
    }
    sum /= size;
    return sum;
}