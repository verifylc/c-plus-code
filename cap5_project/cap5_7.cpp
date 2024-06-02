#include <iostream>
using namespace std;
struct car {
 string brand;
 int year;
};
int main()
{
  int size;
  cout << "How many cars do you wish to catlog?";
  cin >> size;
  cin.get();
  car *car_u = new car [size];
  for(int i =0;i<size;i++)
  {
    cout << "Car #" << i+1 << ":\n";
    cout << "Please enter the make:" ;
    getline(cin,car_u[i].brand);
    cout << "please enter the year made:";
    cin >> car_u[i].year;
    cin.get();
  }
  cout << "Here is your collection:\n";
  for(int i=0;i<size;i++)
  {
    cout << car_u[i].year << " " << car_u[i].brand << endl;
  }
  delete [] car_u;
}
