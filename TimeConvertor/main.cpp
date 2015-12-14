#include <iostream>

using namespace std;

int main()
{
   string time;
   int hh;
   cout<<"Enter the time in 12 Hours format";
   cin>>time;
   if(time[8]=='p' || time[8]=='P')
   {
       hh=((time[0]-48)*10+(time[1]-48));
       if(hh<12) hh=hh+12;
   }
   else
   {
       hh=((time[0]-48)*10+(time[1]-48));
       if(hh==12) hh=00;
   }
   if(hh<9)
   cout<<"0"<<hh<<":"<<time[3]<<time[4]<<":"<<time[6]<<time[7];
   else
    cout<<"0"<<hh<<":"<<time[3]<<time[4]<<":"<<time[6]<<time[7];
    return 0;
}
