#ifndef STRING_H_
#define STRING_H_
#include <iostream>
using std::ostream;
using std::istream;
class String
{
    private:
        char * str;
        int len;
        static const int CINLIM = 80;
    public:
        String(const char * s);
        String();
        String(const String & st);
        ~String();
        String & operator=(const String & st);
        //String & operator=(const char*s);
        void stringlow();
        void stringup();
        int has(char a);
        const String operator+(const String & st)const;
        friend bool operator==(const String & st1, const String st2);
        friend String operator+(const char *str, const String st);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);   
};
#endif