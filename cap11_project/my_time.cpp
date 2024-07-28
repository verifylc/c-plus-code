#include "my_time.h"
Time::Time()
{
    hours = minutes = 0;
}
Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}
void Time::Addhr(int h)
{
    hours +=h;
}
void Time::Addmin(int m)
{
    minutes +=m;
    hours += minutes/ 60;
    minutes = minutes %60;
}
void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
Time operator+(const Time & t1, const Time & t2)
{
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours;
    sum.hours += sum.minutes/ 60;
    sum.minutes = sum.minutes %60;
    return sum;
}
Time operator-(const Time & t1, const Time & t2) //t2-t1
{
    Time diff;
    int tmp_1;
    int tmp_2;
    tmp_1 = t1.minutes + t1.hours *60;
    tmp_2 = t2.minutes + t2.hours * 60;
    diff.minutes = (tmp_2 - tmp_1) % 60;
    diff.hours = (tmp_2-tmp_1)/60;
    return diff;
}
Time operator*(const Time & t1, double n)
{
     Time tmp;
     tmp.minutes = t1.minutes * n;
     tmp.hours = t1.hours * n;
     tmp.hours += tmp.minutes/60;
     tmp.minutes %= 60;
     return tmp;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}