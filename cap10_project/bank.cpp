#include "bank.h"
#include <iostream>
#include <string>
using std::string;
bank::bank()
{
   name = "default";
   id_card = "0";
   money = 0;
}
bank::bank(string i_name, string i_idcard, double i_money)
{
    name = i_name;
    id_card = i_idcard;
    money = i_money;
}
void bank::show() const
{
    using std::cout;
    using std::endl;
    cout << "name: " << name << " id_card: " << id_card;
    cout << " money: " << money << endl;
}
void bank::deposit(double amount)
{
    using std::cout;
    using std::endl;
    if(name == "default")
    {
      cout << "not a account!!!\n";
      return;
    }
    money += amount;
    cout << "deposit success!\n";
    //cout << "money: " << money << endl;
}
void bank::withdraw(double amount)
{
    using std::cout;
    using std::endl;
    if(name == "default")
    {
      cout << "not a account!!!\n";
      return;
    }
    if(amount <= money)
    {
      cout << "take out money: " << amount << endl;
      money -= amount;
      cout << "Balance: " << money << endl;
    }
    else
    {
      cout << "Warning !!!\n insufficeient Balance !!!\n balance: " << money << endl;
    }
      
}
