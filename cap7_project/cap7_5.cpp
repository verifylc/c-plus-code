#include <iostream>
using namespace std;
long double recursion(int n);
int main()
{
   unsigned n;
   cout << "Enter a number :";
   while(cin >> n)
   {
      cout << n <<"! = " << recursion(n) << endl;
      cout << "next a num: ";
   }
   cout << "END!\n";
}
long double recursion(int n)
{
   if(n==0)
      return 1;
   else
      return n * recursion(n-1);
}