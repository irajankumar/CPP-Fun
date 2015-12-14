#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; //total no of candies
    int k; //total no of students
    int c; // no of test cases
    scanf("%d",&c);
    if(c<1){
        return 0;
    }
    else {
        for(int x=0; x<=c; x++){
            scanf("%d",&n);
            scanf("%d",&k);
            int res=result(n,k);
            printf("%d",res));
        }
    }
    return 0;
}
int ways(int p, int q){
//p is no of kandies
// q is no of students
int result;
for(int m=p; m>0; m-- ){
     if(m==1){
       result=(p/2)*(q/2);
     }
    result=ways(m,q);
}

}
