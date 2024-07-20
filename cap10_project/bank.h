#ifndef BANK_H_
#define BANK_H_
#include <string>
using std::string;
class bank
{
    string name;
    string id_card;
    double money;
    
    public:
           bank();
           bank(string name, string id_card, double money);
           void show() const;
           void deposit(double amount);
           void withdraw(double amount); 
};
#endif