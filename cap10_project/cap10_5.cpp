#include <iostream>
#include <cctype>
#include "stack.h"
int main()
{
    stack st;
    char ch;
    customer po;
    using namespace std;
    double sum=0;
    cout << "please enter A to add a purchase order,\n"
         <<"P to process a po, or Q to quit.\n";
    while(cin >> ch && toupper(ch)!= 'Q')
    {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO fullname to add: ";
                      cin.getline(po.fullname, 37);
                      cout << "Enter a po payment num to add: ";
                      cin >> po.payment;
                      cin.get();
                      if(st.isfull())
                        cout << "stack already full\n";
                      else 
                        st.push(po);
                      break;
            case('p'):
            case('P'): if(st.isempty())
                           cout << "stack aleady empty\n";
                       else
                       {
                           st.pop(po);
                           sum += po.payment;
                           cout << "Po name" << po.fullname << "popped\n";
                           cout << "delete payment sum: " << sum <<endl;
                       }
                       break;
        }
        cout << "please enter A to add apurchase  order\n";
        cout << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}