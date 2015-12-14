#include <iostream>
using namespace std;
int main()
{
    int no,ctrl[5]={0};
    cin>>no;
    char str[10000];
     for(int i=0;i<no;i++)
     {
         cin>>str[i];
         char c=str[i];
         switch(c)
    	{
    		case 'a':
                ctrl[0]++; break;
    		case 'e':
    		    ctrl[1]++; break;
    		case 'i':
    		    ctrl[2]++; break;
    		case 'o':
    		    ctrl[3]++; break;
    		case 'u':
    		    ctrl[4]++; break;
    		default:
    		     break;
    	}
     }
    if((ctrl[0]>0) && (ctrl[1]>0) && (ctrl[2]>0) && (ctrl[3]>0) && (ctrl[4]>0))
    {
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }

    return 0;
}
