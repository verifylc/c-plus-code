#include <iostream>
#include <cstring>
#include <new>
struct chaff
{
    char dross[20];
    int slag;
};
const int BUF = 512;
char buffer[BUF];
char *pnew = new char[BUF];
void setchaff(chaff & ch, char str[20], int num);
int main()
{
   using namespace std;
   chaff * ch1;
   chaff * ch2;
   ch1 = new (buffer) chaff[2];
   ch2 = new (pnew) chaff[2];
   cout << "Memory addr heap: " << (void *)pnew << endl;
   cout << "static mem addr: " << (void *)buffer << endl;
   setchaff(ch1[0], (char*)"hhh", 20);
   setchaff(ch2[0], (char*)"bbb", 22);
   setchaff(ch1[1], (char*)"aaa", 21);
   setchaff(ch2[1], (char*)"ccc", 23);
   for(int i=0;i < 2;i++)
   {
      cout << "dross = " << ch1[i].dross;
      cout << ", slag = " << ch1[i].slag;
      cout <<" at " << &ch1[i] << endl;
      cout << "dross = " << ch2[i].dross;
      cout << ", slag = " << ch2[i].slag;
      cout <<" at " << &ch2[i] << endl;
   }
   delete [] pnew;
}
void setchaff(chaff & ch, char str[20], int num)
{
    strcpy(ch.dross, str);
    ch.slag = num;
}