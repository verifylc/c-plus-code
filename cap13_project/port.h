#ifndef PORT_H_
#define PORT_H_
#include <iostream>
class port
{
private:
  char * brand;
  char style[20];
  int bottles;
public:
  port(const char * br = "none", const char * st = "none", int b=0);
  port(const port & p);
  virtual ~port() {delete [] brand;}
  port & operator=(const port & p);
  port & operator+=(int b);
  port & operator-=(int b);
  int bottlecount()const {return bottles;}
  virtual void show() const;
  friend std::ostream & operator<<(std::ostream & os, const port & p);
};

class vintageport: public port
{
private:
  char * nickname;
  int year;
public:
  vintageport();
  vintageport(const char * br, int b, const char * nn, int y);
  vintageport(const vintageport & vp);
  ~vintageport() {delete [] nickname;}
  vintageport& operator=(const vintageport & vp);
  void show() const;
  friend std::ostream & operator<<(std::ostream & os, const vintageport & vp);
};
#endif