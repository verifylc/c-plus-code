#include <iostream>
#include "my_time.h"
int main()
{
    using std:: cout;
    using std:: endl;
    Time aida(3, 45);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "aida + tosca " << temp << endl;
    temp = tosca -aida;
    cout << "tosac - aida  " << temp << endl;
    temp = tosca*10;
    cout << " tosca * 10 " << temp << endl;
    temp = 10 * tosca;
    cout << "10 * tosca " << temp << endl;

    return 0;
}