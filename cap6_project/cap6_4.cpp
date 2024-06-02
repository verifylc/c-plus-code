#include <iostream>
using namespace std;
const int strsize = 20;
struct bop{
    char fullname[strsize];
    char titlename[strsize];
    char bopname[strsize];
    int preference;
};
 void dispaly_info(char tmp_ch, struct bop *u_bop)
 {
   if(tmp_ch == 'a')
   {
     for(int i=0;i<3;i++)
        cout << u_bop[i].fullname << endl;
   } else if(tmp_ch == 'b')
   {
     for(int i=0;i<3;i++)
        cout << u_bop[i].titlename << endl;
    } else if(tmp_ch == 'c')
   {
     for(int i=0;i<3;i++)
        cout << u_bop[i].bopname << endl;
   }
   else
   {
     for(int i=0;i<3;i++)
     {
       if(u_bop[i].preference ==0)
        cout << u_bop[i].fullname << endl;
       else if(u_bop[i].preference ==1)
        cout << u_bop[i].titlename << endl;
       else if(u_bop[i].preference ==2)
        cout << u_bop[i].bopname << endl;
       else
        cout << "preference error\n";
     }
   }
 }

int main()
{
 bop u_bop[3] = {
	 {"curry", "boy", "setp", 0},
	 {"kela", "girl", "tan", 1},
	 {"green", "hh", "zhui", 2}
 };
 cout << "a. display by name     b. display by title\n";
 cout << "c. display by bopname  d. display by preference\n"; 
 cout << "q. quit\n";
 char ch;
 cout << "Enter your choice: ";
S_START:
 cin >> ch;
 switch(ch)
 {
   case 'a' : dispaly_info('a', u_bop); break; 
   case 'b' : dispaly_info('b', u_bop); break;
   case 'c' : dispaly_info('c', u_bop); break;
   case 'd' : dispaly_info('d', u_bop); break;
   case 'q' : cout << "Bye!\n"; break;
   default: cout << "ENTER a correct alpha\n";
 }
 if(ch != 'q')
 {
   cout << "Next choice: ";
   goto S_START;
 }
}
