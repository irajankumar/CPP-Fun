#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of matrix" << endl;
    int n;
    int sum1=0,sum2=0;
    cin>>n;
    const int x=n;
    int array[x][x];
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>array[i][j];
            if(i==j)
                sum1=sum1+array[i][j];
            if((i+j)==(n-1))
                sum2=sum2+array[i][j];
        }
    }
    int result=(sum1-sum2);
    if(result<0) result=(-1*result);
    cout<<"\n Result is: "<<result;
    return 0;
}
