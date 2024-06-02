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
  pizza u_pizza[3];
  for(int i = 0; i< sizeof(u_pizza)/sizeof(u_pizza[0]); i++)
  {
    cout << "please input pizza info " << i << ":\n";
    cout << "name: ";
    getline(cin, u_pizza[i].name);
    cout << "diameter: ";
    cin >> u_pizza[i].diameter ;
    cin.get();
    cout << "weight: ";
    cin >> u_pizza[i].weight;
    cin.get();
  }
  for(int i = 0; i< sizeof(u_pizza)/sizeof(u_pizza[0]); i++)
  {
     cout << "pizza info[" << i << "] : ";
     cout << u_pizza[i].name << " " << u_pizza[i].diameter << " "<< u_pizza[i].weight <<endl;
  }
  return 0;
}
