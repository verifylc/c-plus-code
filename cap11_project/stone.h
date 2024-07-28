#ifndef STONE_H_
#define STONE_H_
#include <iostream>
class stone
{
    public:
      enum Mode {s_pound, s_frac};
    private:
      enum {Lbs_per_stn = 14};
      int stone_wt;
      double pds_left;
      double pounds;
      Mode mode;
    public:
      stone(double lbs, Mode form=s_pound);
      stone(int stb, double lbs, Mode form = s_pound);
      stone();
      stone operator+(const stone st) const;
      stone operator-(const stone st) const;
      stone operator*(double n) const;
      friend stone operator*(double n, const stone st){return st*n;}
      friend std::ostream & operator<<(std::ostream & OS, const stone & st);
};
#endif