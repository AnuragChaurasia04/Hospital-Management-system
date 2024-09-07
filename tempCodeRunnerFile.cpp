#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char d[50]=" The dog ran very fast";
char s[50]=" Rio Husky";
 
//using strlen
cout<<"length="<<strlen(d)<<endl;
 
//using strcat
strcat(d,s);
cout<<d<<endl;
 
//strcmp compare lexicographically
  int r = strcmp(s,d);
  cout<<r<<endl;
  
//strchr
char search='o';
if(strchr(s,search))
{
    cout<<"o is present";
}
 
return 0;
}
