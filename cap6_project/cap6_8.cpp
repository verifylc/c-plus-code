#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  char ch;
  int count=0;
  ifstream infile;
  infile.open("cap6_8.txt");
  if(!infile.is_open())
  {
    cout << "Could not open the cap6_8.txt file " << endl;
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }
  /*
  do{
    infile >> ch;
    cout <ch;
    count++;  
  }while(!infile.eof());
  */
  do{
    infile.get(ch);
    cout.put(ch);
    count++;  
  }while(!infile.eof());
  cout << count << endl;
  infile.close();
}
