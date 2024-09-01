#include "port.h"
int main()
{
    using namespace std;
    port p1;
    port p2("aaa", "bbb", 30);
    cout << p1;
    cout << p2;
    port p3 = p2;
    p3.show();
    p3+=3;
    p3.show();
    port p4 = p2;
    p4 -=2;
    p4.show();
    p2.show();

    vintageport vp1("vaaa", 50, "hhh", 1897);
    vp1.show();
    vintageport vp2;
    std::cout << vp2;
    vp1 -=3;
    vp2 = vp1;
    vp1.show();
    vp2.show();
}