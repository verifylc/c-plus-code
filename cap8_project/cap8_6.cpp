#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T *num, int n);

template <> char* maxn(char* ch[], int n);
int main()
{
   int a[6] = {1, 2, 3, 4, 5, 6};
   double b[4] = {1.1, 2.2, 3.3, 4.4};
   const char * c[5] = {"abc", "abcd", "abcde", "a", "abcde"};
   cout << "a max num: " << maxn(a, 6) << endl;
   cout << "b max num: " << maxn(b, 4) << endl;
   cout << "c max num: " << maxn(c, 5) << endl;
}
template <typename T>
T maxn(T *num, int n)
{
  T tmp=0;
  for(int i=0;i<n;i++)
  {
    tmp = tmp > num[i] ? tmp : num[i];
  }
  return tmp;
}
template <> char* maxn (char* ch[], int n)
{
  int max_len =0;
  int max_index=0;
   for(int i=0;i < n; i++)
   {
     if( max_len < strlen(ch[i]))
     {
       max_len = strlen(ch[i]);
       max_index = i;
     }
   }
   cout << max_index << endl;
   return ch[max_index];
}