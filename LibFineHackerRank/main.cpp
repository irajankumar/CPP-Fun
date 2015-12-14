#include <iostream>

using namespace std;

int main()
{
    //This program is written to find out the fine of library
    int ey,ay,em,am,ed,ad;
    cout<<"Enter actual date:";
    cin>>ad>>am>>ay;
    cout<<"Enter expected date:";
    cin>>ed>>em>>ey;
    if(ay>ey)
        cout<<10000;
    else if(ay==ey && am>em)
        cout<<(am-em)*500;
    else if((ay==ey && am==em) && ad>ed)
        cout<<(ad-ed)*15;
    else
        cout<<0;
    return 0;
}
