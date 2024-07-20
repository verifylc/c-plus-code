#include "list.h"
#include <iostream>
list::list()
{
    top = 0;
}
bool list::isfull()const
{
    return top == MAX;
}
bool list::isempty()const
{
    return top == 0;
}
bool list::additem(Item item)
{
    if(top >= MAX)
    {
      std::cout << "lsi already full!\n";
      return false;
    }
    else
    {
      ITEM_[top++] = item;
      return true;
    }
}
void list::show() const
{
    if(this->isempty())
    {
        std::cout << "list is empty\n";
        return;
    }
    for(int i =0;i< top;i++)
    {
        std::cout << "list #" << i << " : "
                  << ITEM_[i] << std::endl;
    }
}
void list::visit(void (*pf)(Item &))
{
   for(int i =0; i< top ;i++)
   {
     (*pf)(ITEM_[i]);
   }
}