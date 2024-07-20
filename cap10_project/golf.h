#ifndef golf_h_
#define golf_h_
class golf
{
private:
  //static const int Len = 40;
  enum {Len = 40};
  char fullname_[Len];
  int handicap_;
public:
   golf(){fullname_[0] ='\0'; handicap_ =0;}
   golf(const char * name, int hc);
   int setgolf();
   void handicap(int hc);
   void showgolf() const;
};
#endif