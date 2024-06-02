#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
  char str;
  cout << "please Enter str:\n";
  do{
    cin.get(str);
    if(islower(str))
      str = toupper(str);
    else if(isupper(str))
      str = tolower(str);
    else
      str = str;
    cout << str << endl;
  }while( str != '@');
}
