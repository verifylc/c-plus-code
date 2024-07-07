#include <iostream>
#include <cstring>
using namespace std;
struct stringy{
    char* str;
    int   ct;
};
void set(stringy & sy, const char* str);
void show(const stringy & stry, int n=1);
void show(const string str, int n=1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show(beany);
    show("Done!");
    return 0;
}
void set(stringy & sy, const char* str)
{
    sy.ct = strlen(str);
    sy.str = new char[sy.ct];
    strcpy(sy.str, str);
}
void show(const stringy & stry, int n)
{
    for(int i =0; i < n; i++)
        cout << "stringy: " << stry.str << " ct: " << stry.ct << endl;
}
void show(const string str, int n)
{
    for(int i =0; i < n; i++)
        cout << "str: " << str << endl;
}

