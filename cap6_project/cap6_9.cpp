#include <iostream>
#include <fstream>
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
  ifstream infile;
  infile.open("cap6_9.txt");
  if(!infile.is_open())
  {
    cout << "Could not open the cap6_9.txt file " << endl;
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }
  (infile >> num).get();
  per_info * don = new per_info[num];
  for(int i=0; i< num && !infile.eof(); i++)
  {
    cout << "name[ " << i << "] : ";
    (infile >> don[i].name).get();
    cout << don[i].name << endl;
    cout << "donation money: ";
    while(! (infile >> don[i].money))
    {
      infile.clear();
      while (infile.get() != '\n')
	continue;
    }
    cout << don[i].money <<endl;
    if(don[i].money > 10000)
      grand++ ;
    else
      patron++;
  }
  infile.close();`
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
