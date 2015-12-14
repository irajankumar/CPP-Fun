#include <iostream>
#include<assert.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    assert((t<1)||(t>10));
    while(t--)
    {
    	string s;
    	cin>>s;
    	assert((s.length()<1)||(s.length()>100000));
        const int sz=s.length();
    	int bpose[sz],j=0;
    	for(int i=0;i<s.length();i++)
    	{
    		assert((s[i]!='B')||(s[i]!='w'));
    		if(s[i]=='B')
               {
                bpose[j]=i;
                j++;
               }
    	}
    	for(int c=0; c<j-1;c++)
        {   int tg=bpose[c];
            if(s[tg-1])
        }
    }
            return 0;
}
