#include "move.h"
#include <iostream>
move::move(double a, double b)
{
    x = a;
    y = b;
}
void move::showmove() const
{
   std::cout << "x: " << x << " y: " << y << std::endl;
}
move move::add(const move & m) const
{
    move m_out;
    m_out.x = m.x + this->x;
    m_out.y = m.y + this->y;
    return m_out;
} 
void move::reset(double a, double b)
{
    x =a;
    y =b;
}

