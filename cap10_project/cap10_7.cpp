#include <iostream>
#include "plorg.h"
int main()
{
   using namespace std;
   plorg p1;
   plorg p2 = plorg("hhh");
   cout << "p1 :";
   p1.show();
   cout << "change p1";
   p1.change_CI(100);
   p1.show();
   cout << "p2:" ;
   p2.show();
}