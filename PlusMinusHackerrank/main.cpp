#include <iostream>
#include <assert.h>
using namespace std;
int main()
{
    int n,negative=0,positivie=0,zero=0;
    float result;
    cin>>n;
    assert(n>=1 && n<=100);
    const int m=n;
    int array[m];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        assert(array[i]>=-100 && array[i]<=100);
        if(array[i]>0)
            positivie++;
        else if(array[i]<0)
            negative++;
        else
            zero++;
    }
    result=positivie/(n*1.0);
    cout<<result<<endl;
    result=negative/(n*1.0);
    cout<<result<<endl;
    result=zero/(n*1.0);
    cout<<result;
    return 0;
}
