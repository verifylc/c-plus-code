#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main()
{
  //vector <float> grade_40m (3);
  array<float,3> grade_40m;
  cout << "Enter your grade 1\n";
  cin >> grade_40m[0];
  cout << "Enter your grade 2\n";
  cin >> grade_40m[1];
  cout << "Enter your grade 3 \n";
  cin >> grade_40m[2];
  cout << "your enter " << grade_40m.size() << " grade\n";
  cout << (grade_40m[0] + grade_40m[1] + grade_40m[2] )/grade_40m.size() << endl;

}
