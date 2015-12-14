#include <iostream>
using namespace std;
int CheckPalindrum(long);
int main()
{   long no,result=1;
    for(int i=100;i<=999;i++)
    {
        for(int j=100;j<=i;j++)
        {
          no=i*j;
          if(CheckPalindrum(no))
          {
              if(no>result)
                result=no;
          }

        }
    }
    cout<<"\nLargest palindrum no is "<<result;
    return 0;
}
int CheckPalindrum(long no)
{
    long tm=no;
    long rev=0;
    while(no>0)
    {
        rev=rev*10+(no%10);
        no=no/10;
    }
    if(rev==tm)
        return 1;
    else
        return 0;
}
