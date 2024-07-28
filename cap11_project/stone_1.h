#ifndef STONE1_H_
#define STONE1_H_
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
      bool operator==(const stone st) const{return (pounds == st.pounds);}
      bool operator!=(const stone st) const{return (pounds != st.pounds);}
      bool operator>(const stone st) const{return (pounds > st.pounds);}
      bool operator<(const stone st) const{return (pounds < st.pounds);}
      bool operator>=(const stone st) const{return (pounds >= st.pounds);}
      bool operator<=(const stone st) const{return (pounds <= st.pounds);}

      friend std::ostream & operator<<(std::ostream & OS, const stone & st);
};
#endif