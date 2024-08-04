#include "string2.h"
#include <cstring>
#include <cctype>
String::String(const char * s)
{
    len = strlen(s);
    str = new char [len+1];
    strcpy(str, s); 
}
String::String()
{
    len = 4;
    str = new char [1];
    str[0] = '\0';
}
String::String(const String & st)
{
    len = st.len;
    str = new char [len+1];
    strcpy(str, st.str);
}
String::~String()
{
    delete [] str;
}
String & String::operator=(const String & st)
{
    if(this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char [len+1];
    strcpy(str, st.str);
    return *this;
}
// String & String::operator=(const char*s)
// {
//     delete [] str;
//     len = strlen(s);
//     str =new char [len+1];
//     strcpy(str, s);
//     return *this;
// }
void String::stringlow()
{
    for(int i = 0; i< strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }    
}
void String::stringup()
{
    for(int i = 0; i< strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }  
}
int String::has(char a)
{
    int num =0;
    for(int i = 0; i< len; i++)
    {
         if(str[i] == a)
             num++;
    }   
    return num;
}
const String String::operator+(const String & st) const
{
    int tmp_len;
    tmp_len = len + st.len;
    char * tmp_str = new char[tmp_len+1];
    strcpy(tmp_str, str);
    strcat(tmp_str, st.str);
    String st_tmp = tmp_str;
    delete [] tmp_str; 
    return st_tmp;
}
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
      st = temp;
    while(is && is.get() != '\n')
        continue;
    return is;
}
String operator+(const char *str, const String st)
{
    
    return (String(str)+st);
}
bool operator==(const String & st1, const String st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}