#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n][100];
    int ctrl[26][n];
    for(int i=0; i<n; i++)
    {

        for(int j=0; int(str[i][j])!=10; j++)
        {
            cin>>str[i][j];
   /*         char ch=str[i][j];
    if(ch=='a')
    {
        ctrl[0][i]++;
    }
    if(ch=='b')
    {
        ctrl[1][i]++;
    }
    if(ch=='c')
    {
        ctrl[2][i]++;
    }
    if(ch=='d')
    {
        ctrl[3][i]++;
    }
    if(ch=='e')
    {
        ctrl[4][i]++;
    }
    if(ch=='f')
    {
        ctrl[5][i]++;
    }
    if(ch=='g')
    {
        ctrl[6][i]++;
    }
    if(ch=='h')
    {
        ctrl[7][i]++;
    }
    if(ch=='i')
    {
        ctrl[8][i]++;
    }
    if(ch=='j')
    {
        ctrl[9][i]++;
    }
    if(ch=='k')
    {
        ctrl[10][i]++;
    }
    if(ch=='l')
    {
        ctrl[11][i]++;
    }
    if(ch=='m')
    {
        ctrl[12][i]++;
    }
    if(ch=='n')
    {
        ctrl[13][i]++;
    }
    if(ch=='o')
    {
        ctrl[14][i]++;
    }
    if(ch=='p')
    {
        ctrl[15][i]++;
    }
    if(ch=='q')
    {
        ctrl[16][i]++;
    }
    if(ch=='r')
    {
        ctrl[17][i]++;
    }
    if(ch=='s')
    {
        ctrl[18][i]++;
    }if(ch=='t')
    {
        ctrl[19][i]++;
    }
    if(ch=='u')
    {
        ctrl[20][i]++;
    }if(ch=='v')
    {
        ctrl[21][i]++;
    }if(ch=='w')
    {
        ctrl[22][i]++;
    }
    if(ch=='x')
    {
        ctrl[23][i]++;
    }if(ch=='y')
    {
        ctrl[24][i]++;
    }
    if(ch=='z')
    {
        ctrl[25][i]++;
    }
     */
        }
    }
}


