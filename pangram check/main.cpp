#include <cstdio>
#include <iostream>
#include<ctype.h>
using namespace std;
int main() {
    string s;
    int ctr[26];
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
        {
        if(isalpha(s[i]))
       {
        char ch=toupper(s[i]);
        if(ch=='A')
            ctr[0]++;
        else if(ch=='B')
            ctr[1]++;
        else if(ch=='C')
            ctr[2]++;
        else if(ch=='D')
            ctr[3]++;
        else if(ch=='E')
            ctr[4]++;
        else if(ch=='F')
            ctr[5]++;
        else if(ch=='G')
            ctr[6]++;
        else if(ch=='H')
            ctr[7]++;
        else if(ch=='I')
            ctr[8]++;
        else if(ch=='J')
            ctr[9]++;
        else if(ch=='K')
            ctr[10]++;
        else if(ch=='L')
            ctr[11]++;
        else if(ch=='M')
            ctr[12]++;
        else if(ch=='N')
            ctr[13]++;
        else if(ch=='O')
            ctr[14]++;
        else if(ch=='P')
            ctr[15]++;
        else if(ch=='Q')
            ctr[16]++;
        else if(ch=='R')
            ctr[17]++;
        else if(ch=='S')
            ctr[18]++;
        else if(ch=='T')
            ctr[19]++;
        else if(ch=='U')
            ctr[20]++;
        else if(ch=='V')
            ctr[21]++;
        else if(ch=='W')
            ctr[22]++;
        else if(ch=='X')
            ctr[23]++;
        else if(ch=='Y')
            ctr[24]++;
        else if(ch=='Z')
            ctr[25]++;
       }
        }
        int flag=0;
        for(int i=0;i<26;i++)
            {
            if(ctr[i]>0) flag++;
        }
        if(flag>25) {
                cout<<"pangram";
        }
        else
            cout<<"not pangram";
    return 0;
}
