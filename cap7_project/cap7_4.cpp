#include <iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main()
{
    cout << "You have one chance in ";
    cout << probability(47, 5)*probability(27, 1) << " of winning\n";
    
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    unsigned n,p;
    for(n = numbers, p = picks; p >0; n--, p--)
        result = result *n/p;
    return result;
}