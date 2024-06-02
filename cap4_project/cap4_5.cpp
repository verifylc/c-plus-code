#include <iostream>
using namespace std;
struct CandyBar{
  string brand;
  float weight;
  int calori;
};
int main()
{
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  cout << "snack information:"<<endl<<snack.brand<<endl;
  cout << snack.weight<<endl;
  cout << snack.calori<<endl;
  return 0;
}
