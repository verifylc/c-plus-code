#include <iostream>
#include <cstring>
using namespace std;
void cvt_str(string & str);
int main()
{
     string str;
     cout << "Enter a string (q to quit): ";
     while(1)
     {
       cin >> str;
       if(str == "q")
         break;
       cvt_str(str);
       cout << "Next string(q to quit): ";
     };
     cout << "End!\n";
}
void cvt_str(string & str)
{   
    for(int i=0;i<str.size();i++)
      str[i] = toupper(str[i]);
    cout << str << endl;
}