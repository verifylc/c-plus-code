#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  string word;
  int vowel = 0;
  int con = 0;
  int oth = 0;
  cout << "Enter words :\n";
  while(cin >> word && word != "q")
  {
    if(isalpha(word[0]))
    {
      switch(tolower(word[0]))
      {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': vowel++; break;
        default: con++; break;
      }
    }
    else
    {
      oth++;
    }
  }
  cout << vowel << " words beginning with vowel\n";
  cout << con << " words beginning with consonants\n";
  cout << oth << " others\n";

}
