#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    FILE *fp;
    char ch;
    char filename[30];
    char date[12];
    int i=0, Newline=0;
    char msg[10];
    scanf("%s"msg)
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL){
        return 0;
    }
    while((ch==getc(fp))!=EOF)
    {

        if(ch==NULL){
           //it means we found a new line
            Newline++;
            if(ch=="error")
           {
               for(int i=0; i<=10; i++){
             date[i]=ch;
            }
           }
          puts(date);
        }

    }
    return 0;
}
