#include <iostream>
using namespace std;
int main()
{
  int num;
  float tvar = 0;
  cout << "Enter first tvar: ";
start:
  if(cin >> num && num >0)
  {
    if(num < 5000)
      tvar = 0;
    else if (num < 15000)
      tvar = (num - 5000) * 0.1;
    else if (num < 35000)
      tvar = (num - 15000) * 0.15 + 10000 * 0.1;
    else 
      tvar = (num - 35000) * 0.2 + 10000 * 0.1 + 20000 * 0.15;
    cout << "You tvar: " << tvar << endl;
    cout << "Next tvar (or enter any aplha quit) : \n";
    goto start;
  }
  cout << "Bye\n";
}
