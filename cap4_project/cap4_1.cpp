#include <iostream>
#include <string>
using namespace std;
int main()
{
  string first_name,last_name;
  char grade;
  int age;

  cout << "what is your first name? ";
  getline(cin,first_name);
  cout << "what is your last name? ";
  getline(cin,last_name);
  cout << "what letter grade do you deserve? ";
  cin.get(grade).get();
  cout << "what is your age? ";
  cin >> age;
  cout << last_name << ", " << first_name <<endl;
  cout << static_cast<char>(int(grade) - 1) << endl;
  cout << age <<endl;

}
