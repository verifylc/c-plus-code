#include "stock.h"
#include <iostream>
int main()
{
   using namespace std;
   const int STKS = 4;
   stock ss[STKS] = {
           stock("NanoSmart", 12, 20.0),
           stock("Boffo Objects", 200, 2.0),
           stock("Monolithic Obelisks", 130, 3.25),
           stock("Fleep Enterprises", 60, 6.5)
   };
   cout << "Stock holdings: \n";
   int st;
   for (st = 0; st < STKS; st++)
       cout << ss[st];
   const stock * top = &ss[0];
   for (st = 1; st < STKS; ++ st)
       top = &top -> topval(ss[st]);
   cout << "\nMost valuable holding:\n";
   cout << *top;
}
