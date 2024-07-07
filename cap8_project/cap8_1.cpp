#include <iostream>
using namespace std;
int i =0;
void show_str(const string * str);
void show_str(const string *str, int n);
int main()
{ 
    string str;
    str = "curry";
    show_str(&str);
    show_str(&str,0);
    show_str(&str,3);
    return 0;
}
void show_str(const string * str)
{
    i++;
    cout << "this string is ";
    cout << *str << endl;
}
void show_str(const string *str, int n)
{   
    i++;
    if(n == 0)
        show_str(str);
    else
        cout << "this function is call :" << i << endl;
}