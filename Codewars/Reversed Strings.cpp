#include <string>
using namespace std ; 

string reverseString (string str )
{
  char s; 
  int q = str.length();
  for (int i = 0; i < q ; i++){
    s = str[i];
    str[i] = str[q-1];
    str[q-1] = s;
    q -= 1;
  }
  return str; ;
}
