#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int* find(int* x, int* y,int)
    {
    while( x==y)
        {
        if(*x==*y) return x;
        else
            x+=sizeof(x);
    }
    return y;
}

int main() {
    int n;
    cin>>n;
    const int s=n;
    int array[s];
    int *p;
    for(int i=0;i<=n;i++)
        {
        int m;
        cin>>m;
        if(i==0)
            array[i]=m;
        else{

            p=find (array, array+(i+1), m);
            if(p!=array+(i+1))
                cout<<"REDUNDANT"<<endl;
             else{
                    array[i]=m;
                    cout<<"ADDED"<<endl;
                    }

        }

    }
    return 0;
}
