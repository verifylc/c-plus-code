#include <iostream>
using namespace std;
int main()
{
  int a;
  int rlt=0;
  cout << "start enter numbel\n";
  do{
  cin >> a;
  rlt += a;
  }while(a != 0);
  cout << rlt;
}
