#include <stdio.h>
#include<stdlib.h>
struct number
{
    int num;
};
int main()
{
    struct number a;
    struct number b;
    scanf("%d",&b.num);
    scanf("%d",&a.num);
    printf("Sum=%d\n",(b.num+a.num));
    return 0;
}
