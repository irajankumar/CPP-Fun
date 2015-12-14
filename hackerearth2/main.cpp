#include <iostream>
using namespace std;

int main()
{ string a; long ival=0; long m=6;
   cin>>a;
   int i=0;
   while(i<a.length())
   {
   	char c=a[i];
   		ival=(10*ival)+(((int)c)-96);
   		i++;
   }
   if((ival%m==0))
   {
   	cout<<"YES";
   }
   else
   cout<<"NO";
    return 0;
}
