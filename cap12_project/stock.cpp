#include "stock.h"
#include <cstring>
stock::stock()
{
    company = new char[20];
    strcpy(company, "C++");
    shares = share_val = 0;
}
stock::stock(const char * co, long n, double pr)
{
    company = new char [(strlen(co)+1)];
    strcpy(company, co);
    share_val = pr;
    if (n < 0) 
    {
        std::cout << "Number of shares can't be negative; " << company
                  << " shares set to 0.\n";
        shares = 0;
    } 
    else
        shares = n;
    set_tot();
}
stock::~stock()
{
    delete [] company;
}
void stock::buy(long num, double price) 
{
  if (num < 0) {
    std::cout << "Number of shares purchased can’t be negative. "
              << "Transaction is aborted.\n";
  } else {
    shares += num;
    share_val = price;
    set_tot();
  }
}
void stock::sell(long num, double price) 
{
  using std::cout;
  if (num < 0) {
    cout << "Number of shares sold can't be negative. "
         << "Transaction is aborted.\n";
  } else if (num > shares) {
    cout << "You can't sell more than you have! "
         << "Transaction is aborted.\n";
  } else {
    shares -= num;
    share_val = price;
    set_tot();
  }
}
void stock::update(double price) 
{
  share_val = price;
  set_tot();
}
const stock& stock::topval(const stock & s) const 
{
  if (s.total_val > total_val)
    return s;
  else
    return *this;
}
std::ostream & operator<<(std::ostream & os,const stock & st)
{
  using std::ios_base;
  // set format to #.###
  ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prec = os.precision(3);
  os << "Company: " << st.company << " Shares: " << st.shares << '\n';
  os << " Share Price: $" << st.share_val;
  // set format to #.##
  os.precision(2);
  os << " Total Worth: $" << st.total_val << '\n';
  // restore original format
  os.setf(orig, ios_base::floatfield);
  os.precision(prec);
  return os;
}