#include <iostream>
using namespace std;
int main()
{
  string month[12] = {
  "jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"
  };
  int sale[3][12];
  int sale_out[3]={0,0,0};
  for(int j=0;j<3;j++)
  for(int i=0;i< sizeof(month)/sizeof(month[0]);i++)
  {
    cout << "Enter " << j+1 << "year " << month[i] << " sale :";
    cin >> sale[j][i];
    sale_out[j] += sale[j][i];
  }
  cout << " first year sale :" << sale_out[0] <<endl;
  cout << " second year sale :" << sale_out[1] <<endl;
  cout << " third year sale :" << sale_out[2] <<endl;
  cout << " three year sale: " << sale_out[0]+sale_out[2]+sale_out[1] << endl;
}
