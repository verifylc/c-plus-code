#include <iostream>
#include <array>
#include <cctype>
using namespace std;
int main()
{
  array <double, 10> donation;
  int i=0;
  int more_average_num=0;
  double average=0;
  cout << "Enter donation:\n";
  while(i<10 && cin >> donation[i] )
  {
    average += donation[i];
    i++;
  }
   average /=i; 
  for(int j=0;j<i;j++)
  {
    if(donation[j]>average)
      more_average_num++;
  }
  cout << "average: " << average <<endl;
  cout << "enter digit total :" <<i <<endl;
  cout << "more_avge_num: " << more_average_num <<endl;
  /*
  cout << "ENter a num before (cin.clear)\n";
  int num =0 ;
  cin >> num;
  cout << "num :" <<num <<endl;
  
  if(!cin)
  { 
    cout << "clear cin\n";
    cin.clear();
    cin.get(); // read 
    cin.get(); // read end of line after last input
    cin.get();
  }
  cout << "ENter a num after (cin.clear)\n";
  cin >> num;
  cout << "num :" <<num <<endl;
   */
  return 0;
}
