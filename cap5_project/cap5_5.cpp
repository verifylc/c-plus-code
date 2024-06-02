#include <iostream>
using namespace std;
int main()
{
  string month[12] = {
  "jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"
  };
  int sale[12];
  int sale_out=0;
  for(int i=0;i< sizeof(month)/sizeof(month[0]);i++)
  {
    cout << "Enter " << month[i] << " sale :";
    cin >> sale[i];
    sale_out += sale[i];
  }
  cout << " all month sale :" << sale_out <<endl;
}
