#ifndef Person_h_
#define Person_h_
#include <string>
class Person {
 private:
     static const int LIMIT = 25;   
     std::string lname;
     char fname[LIMIT];
 public:
     Person(){ lname = ""; fname[0] = '\0';}
     Person(const std::string &ln, const char * gn = "Heyyou");
     void Show() const;
     void FormalShow() const;   
};
#endif