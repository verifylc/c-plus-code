#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  int count =0;
  char ch[30];
  cout << "Enter words (to stop, type the word done):\n";
  do{
      cin >>ch;
      count++;
  }while( strcmp(ch, "done"));
  cout << "you enter a total of " << count-1 << " words.\n";
}
