#include <iostream>
using namespace std;
int main()
{
  int row;
  cout << "Enter number of rows:";
  cin >> row;
  for(int i=0;i<row;i++)
  {
    for(int j=row;j>0;j--)
    {
      if(j>i+1)
        cout << ".";
      else
        cout << "*";
    }
    cout <<endl;
  }
}
