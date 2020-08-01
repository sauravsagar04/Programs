#include<iostream>
#include<string>
using namespace std;
int main()
{
  int i,n;
  string str;
  char temp;
  cout<<"ENTER YOUR STRING"<<"\n";
  getline (cin, str);
  n = str.length();
  for(i = 0; i < (n/2); i++)
  {
    temp = str[(n-1) - i];
    str[(n-1)-i] = str[i];
    str[i] = temp;
  }
  cout<<"Reversed string is\t"<<str<<"\n";
  return 0;
}
