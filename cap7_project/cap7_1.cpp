#include <iostream>
using namespace std;
float harmonic(int x, int y);
int main()
{
   int x,y;
   
   do
   {
      cout << "ENter please num x and num y : ";
      while(!(cin >> x >> y))
      {
         cin.clear();
         while(cin.get() != '\n')
             continue;
         cout << "bad input, please enter x and y: ";
      }    
      cout << "harmonic : " << harmonic(x,y) << endl;
   }while(x !=0 && y !=0);
}
float harmonic(int x, int y)
{
    return 2.0*x*y/(x+y);
}