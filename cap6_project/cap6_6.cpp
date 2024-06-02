#include <iostream>
using namespace std;
struct per_info{
  string name;
  double money;
};
int main()
{
  int num;
  int grand = 0;
  int patron = 0;
  cout << "Please  enter donators: ";
  cin >> num;
  cin.get();
  per_info * don = new per_info[num];
  for(int i=0; i< num; i++)
  {
    cout << "Please enter name[ " << i << "] : ";
    getline(cin, don[i].name);
    cout << "please enter donation money: ";
    (cin >> don[i].money).get();
    if(don[i].money > 10000)
      grand++ ;
    else
      patron++;
  }
  cout << "Grand patrons : \n";
  if(grand>0)
  for(int i = 0; i<num; i++)
  {
    if(don[i].money > 10000)
    {
      cout << "name: " << don[i].name;
      cout << "    money: " << don[i].money << endl;
    }
  }
  else 
    cout << "None\n";
  cout << "Patrons: \n";
  if(patron>0)
  for(int i = 0; i<num; i++)
  {
    if(don[i].money <= 10000)
    {
      cout << "name: " << don[i].name;
      cout << "    money: " << don[i].money << endl;;
    }
  }
  else 
    cout << "None\n";


  delete [] don;
}
