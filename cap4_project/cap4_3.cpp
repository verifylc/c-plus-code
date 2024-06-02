#include <iostream>
#include <cstring>
int main()
{
  using namespace std;
  char first_name[20];
  char last_name[20];
  cout << "Enter your first name: ";
  cin.get(first_name,20).get();
  cout << "Enter your last name: ";
  cin.getline(last_name,20);
  cout << "Here's the information in a single string: " << strcat(first_name, ", ") << last_name << endl;
  return 0;
}
