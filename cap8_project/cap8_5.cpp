#include <iostream>
using namespace std;
template <typename T>
void max5(const T * num);
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  max5(a);
  max5(b);
}
template <typename T>
void max5(const T * num)
{   
    T tmp;
    tmp = num[0];
    for(int i=1 ; i<5; i++)
    {
       tmp = tmp > num[i] ? tmp : num[i]; 
    }
    cout << "MAx: " << tmp << endl;
}