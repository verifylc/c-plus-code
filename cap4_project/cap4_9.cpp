#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct CandyBar{
string brand;
  float weight;
  int calori;
};
int main()
{
  CandyBar * snack = new CandyBar[3];
  CandyBar snack_cp[3] = {
	  {"M0", 0.3, 350},
	  {"M1", 1.3, 351},
	  {"M2", 2.3, 352}
          };
  copy(snack_cp, snack_cp + (sizeof(snack_cp)/sizeof(snack_cp[0])), snack);
  cout << sizeof(snack_cp) <<endl;
  cout << sizeof(snack_cp[0]) <<endl;
  cout << sizeof(*snack) <<endl;
  cout << sizeof(snack) <<endl;
  for(int i=0;i<3;i++)
  {
    cout << "sanck["<<i<<"] info\n";
    cout << "brand: " << snack[i].brand << endl;
    cout << "weight: " << snack[i].weight << endl;
    cout << "calori: " << snack[i].calori << endl;
  }
 delete [] snack;
  return 0;
}
