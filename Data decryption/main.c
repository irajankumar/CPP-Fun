#include <stdio.h>
#include <stdlib.h>

int main()
{ int no[100]; int fcount=0; int i=0;
    char charf;
   FILE *fp;
   char filename[20];
   scanf("%s",filename);
   fp=fopen(filename,"r");
   while((charf=getwc(fp)!=EOF)
         {
                 if(charf=="f"){
            fcout++;
         } if((fcount%2)==0){
            no[i]=getw(fp);
            i++;
          }
          if(charf=='f'){
            printf("|");
          }
          else
             printf("%d",no[i]);
         }

}
