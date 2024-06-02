#include <iostream>
using namespace std;
float cleo(int i );
float daphne(int i);
int main()
{
  int a = 1;
  int i = 1;
  do
  {
    a = daphne(i) > cleo(i);
    i++;
  }while(a); 
  cout << "year :" << i << endl;
  cout << "daphne " << daphne(i) <<endl;
  cout << "cleo " << cleo(i) <<endl;
}
float daphne(int i)
{
  return (100+100*0.1*i);
}
float cleo(int i)
{
  float rlt=100;
  float tmp;
  for(int j = 1; j<=i;j++)
  {
    tmp = rlt*0.05;
    rlt += tmp;
  }
  return rlt;
}
