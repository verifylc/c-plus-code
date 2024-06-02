#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
  string brand;
  float weight;
  int calori;
};
int main()
{
  CandyBar snack[3] = {
	  {"M0", 0.3, 350},
	  {"M1", 1.3, 351},
	  {"M2", 2.3, 352}
          };
  cout << sizeof(snack[0].brand) << endl;
  cout << sizeof(snack[0].weight) << endl;
  cout << sizeof(snack[0].calori) << endl;
  cout << sizeof(snack)/sizeof(snack[0]) << endl;
  for(int i=0;i<sizeof(snack)/sizeof(snack[0]);i++)
  {
    cout << "sanck["<<i<<"] info\n";
    cout << "brand: " << snack[i].brand << endl;
    cout << "weight: " << snack[i].weight << endl;
    cout << "calori: " << snack[i].calori << endl;
  }
  return 0;
}
