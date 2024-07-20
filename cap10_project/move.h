#ifndef move_h_
#define move_h_
class move
{
    double x;
    double y;
public:
    move(double a =0, double b=0);
    void showmove() const;
    move add(const move & m) const;
    void reset(double a=0, double b=0);
};
#endif