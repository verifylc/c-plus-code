 #include <iostream>
 using namespace std;
 #include "CD.h"
 void Bravo(const Cd & disk);
 int main()
 {
   Cd c1("Beatles", "capitol", 14, 35.5);
   Classic c2 = Classic("piano sonata in b flat, Fantasia in c",
      "Alfred Brendel", "philips", 2, 57.17);


   cout << "using object directly: \n";
   c1.Report();
   c2.Report();

   cout  << "using type cd * pointer to object:\n";
   Cd *pcd = &c1;
   pcd->Report();
   pcd = &c2;
   pcd->Report();

   cout << "Calling a function with a Cd reference argument:\n";
   Bravo(c1);
   Bravo(c2);
   cout << "Testing assignment: \n";
   Classic copy;
   copy = c2;
   copy.Report();
 }
 void Bravo(const Cd & disk)
 {
    disk.Report();
 }