#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
        string s;
        vector<char>rev;
        cin>>s;
        for(int i=s.length()-1;i>=0;i--)
            {
            rev.push_back(s[i]);
        }
        int flag=1;
        for(int i=1; i<s.length();i++)
            {
            if(abs(int(s[i])-(int(s[i-1])))!=abs(int(rev[i])-(int(rev[i-1]))))
                {
                flag=0;
                break;
            }
        }
        if(flag) cout<<"Funny"<<endl;
        else cout<<"Not Funny"<<endl;
    }
    return 0;
}
