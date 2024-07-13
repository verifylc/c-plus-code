#include <iostream>
#include <string>
const int Arsize = 10;
void strcout(const std::string & str);
int main()
{
    using namespace std;
    string input;

    cout << "Enter a line: \n";
l1:    getline(cin, input);
    if(cin && input != "")
    {
        strcout(input);
        cout<< "ENter nexxt line (empty line to quit):\n";
        goto l1;
    }
}
void strcout(const std::string & str)
{
  using namespace std;
  static int total =0;
  int count = 0;
  cout << "\"" << str << "\" contains ";
  count += str.size();
  total +=count;
  cout << count << "characters\n";
  cout << total << "characters total\n";
}
