#include <iostream>
#include <string>
using namespace std;
struct pizza{
  string name;
  float diameter;
  float weight;
};
int main()
{
  pizza * u_pizza = new pizza;
  cout << "ENTER diameter:" <<endl;
  cin >> (*u_pizza).diameter;
  cin.get();
  cout << "ENTER name:" <<endl;
  getline(cin, u_pizza -> name);
  cout << "ENTER weight:" <<endl;
  cin >> u_pizza -> weight;
  cout << "name:" << (*u_pizza).name << endl;
  cout << "diameter:" << u_pizza->diameter << endl;
  cout << "weight:" << (*u_pizza).weight << endl;
  cout << "addr:" << &(u_pizza->weight) << endl;
  delete u_pizza;
  cout << "addr:" << u_pizza << endl;
  return 0;
}
