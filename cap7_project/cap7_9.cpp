#include <iostream>
using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display_1(student st);
void display_2(const student *ps);
void display_3(const student pa[], int n);
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i =0;i<entered; i++)
    {
        cout << "student #" << i << " : ";   
        display_1(ptr_stu[i]);
        display_2(&ptr_stu[i]); 
    }
    display_3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    
}
int getinfo(student pa[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout << "Enter #" << i;
        cout << " fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        if(pa[i].fullname[0] == '\0')
            break;
        cout << " hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << " ooplevel: ";
        cin >> pa[i].ooplevel; 
        cin.get();   
    }
    return i;
}
void display_1(student st)
{
    cout << "fullname: " << st.fullname << " hobby: " << st.hobby << " ooplevel: " << st.ooplevel << endl;
}
void display_2(const student *ps)
{
    cout << "fullname: " << ps -> fullname << " hobby: " << ps -> hobby << " ooplevel: " << ps -> ooplevel << endl;
}
void display_3(const student pa[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "student #" << i << " fullname: " << pa[i].fullname << " hobby: " << pa[i].hobby << " ooplevel: " <<  pa[i].ooplevel << endl;
    }
}