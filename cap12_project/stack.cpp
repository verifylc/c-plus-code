#include "stack.h"
stack::stack(int n)
{
   size = n;
   top = 0;
   pitems = new Item [size];
}
stack::stack(const stack & st)
{
    delete [] pitems;
    size = st.size;
    top = st.top;
    pitems = new Item [size];
    for(int i =0;i < size; i++)
        pitems[i] = st.pitems[i];
}
stack::~stack()
{
    delete [] pitems;
}
bool stack::isempty()const
{
    return (top == 0);
}
bool stack::isfull()const
{
    return (top == size);
}
bool stack::push(const Item & item)
{
    if(isfull())
        return false;
    else
    {
        pitems[top++] = item;
        return true;
    }
}
bool stack::pop(Item & item)
{
    if(isempty())
        return false;
    else
    {
        item = pitems[--top];
        return true;
    }
}
stack & stack::operator=(const stack & st)
{
    if(this == &st)
        return *this;
    delete [] pitems;
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for(int i=0; i < size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}
std::ostream & operator<<(std::ostream & os, const stack & st)
{
    for(int i =0; i< st.top; i++)
    {
        os << st.pitems[i] << std::endl;
    }
    return os;
}