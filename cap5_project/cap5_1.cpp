#include <iostream>
using namespace std;
int main()
{
  int min_num;
  int max_num;
  int result=0;
  cout << "please enter min number: ";
  cin >> min_num;
  cout << "please enter max number: ";
  cin >> max_num;
  for(int i=min_num;i<=max_num;i++)
  {
    result += i;
  }
  cout << "computer result: " << result << endl;
}
