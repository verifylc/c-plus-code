#include "stone.h"
#include <iostream>
using std::cout;
stone::stone(double lbs, Mode form)
{
    mode = form;
    stone_wt = int(lbs)/Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
stone::stone(int stn, double lbs, Mode form)
{
    mode = form;
    stone_wt = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}
stone::stone()
{
    stone_wt = pds_left = pounds = 0;
    mode = s_pound;
}
stone stone::operator+(const stone st) const
{
    return stone(st.pounds+pounds);
}
stone stone::operator-(const stone st) const
{
    return stone(pounds - st.pounds);
}
stone stone::operator*(double n) const
{
    return stone(pounds * n);
}
std::ostream & operator<<(std::ostream & OS, const stone & st)
{
    if(st.mode == stone::s_frac)
    {
        OS << st.stone_wt << "stone, " << st.pds_left << " pounds\n";
    }
    else if(st.mode == stone::s_pound)
    {
        OS << st.pounds << " pounds\n";
    }
    else
    {
        OS << "this is invalid mode!\n";
    }
    return OS;
}