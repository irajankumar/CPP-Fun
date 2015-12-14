#include <iostream>
using namespace std;

int main()
{
    int tc,flag[1000]={0};
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
    	long array[1000];
    	int size,sub=0; long diff;
    	cin>>size;
    	cin>>diff;
    	for(int c=0; c<size; c++)
    	{
    		cin>>array[c];
    	}
    	for(int c=0; c<size-1; c++)
        {
            sub=array[c+1]-array[c];
            if(sub>diff)
                flag[i]=1;
        }


    }
    for(int i=0;i<tc;i++){
       if(flag[i]==0)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
    }

    return 0;
}
