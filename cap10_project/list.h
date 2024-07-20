#ifndef list_h_
#define list_h_
typedef int Item;
class list
{
private:
    static const int MAX = 10;
    Item ITEM_[MAX];
    int top;
public:
    list();
    bool isfull()const;
    bool isempty() const;
    bool additem(Item item);
    void show() const;  
    void visit(void (*pf)(Item &));
};
#endif