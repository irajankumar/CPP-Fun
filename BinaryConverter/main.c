#include <stdio.h>
#include <stdlib.h>

int main()
{   int no,ld;
    printf("Enter the no:\n");
    scanf("%d",&no);
    while(no>0)
    {
        ld=no%10;
        printf("%d",(ld%2));
        no=no/10;
    }
    return 0;
}
