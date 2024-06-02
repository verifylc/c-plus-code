#include <iostream>
using namespace std;
int main()
{
  char ch;
  string str;
  cout << "Enter one of the following choices:\n";
S_START:
  cin >> ch;
  switch (ch)
  {
     case 'c': 
	       str = "carnivore";
	       break;
     case 'p': 
	       str =  "pianist";
	       break;
     case 't':
	       str = "tree";
	       break;
     case 'g': 
	       str = "game";
	       break;
     default: 
	       cout << "Please enter a c, p, t or g: ";
	       goto S_START;
  }
  cout << "A maple is a " << str <<endl;
}
