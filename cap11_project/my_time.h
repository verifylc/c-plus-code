#ifndef MY_TIME_H_
#define MY_TIME_H_
#include <iostream>
class Time
{
    private:
      int hours;
      int minutes;
    public:
      Time();
      Time(int h, int m =0);
      void Addmin(int m);
      void Addhr(int h);
      void Reset(int h = 0, int m = 0);
      friend Time operator+(const Time & t1, const Time & t2);
      friend Time operator-(const Time & t1, const Time & t2);//t2-t1
      friend Time operator*(const Time & t1, double n);
      friend Time operator*(double n, const Time & t2){return t2* n;}
      friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif