#include <iostream>
#include <array>
using namespace std;
long double fac_1(int num);
int main()
{
  array <long double, 101>fac;
  fac[0] = 1;
  fac[1] = 1;
  for(int i=2;i<=100;i++)
  {
    fac[i] = i*fac[i-1];
  }
  cout << "computer result: " << fac[100] << endl;
  cout << fac_1(100) << endl;
}
long double fac_1(int num)
{
  int i;
  long double rlt=1;
  for(i=2;i<=num;i++)
  {
    rlt = i*rlt;
  }
  return rlt;
}
