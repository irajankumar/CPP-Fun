#include <iostream>
#include<string.h>
using namespace std;
void solve(string);
int logger();
int main()
{
    if(logger())
    {
    while(1)
    {
        string expression;
        cout<<endl<<">>>";
        getline(cin,expression);
        solve(expression);
    }
    return 0;
    }
}
void solve(string expression)
{
    int expression_size=expression.length();
    if(expression_size>0)
        cout<<endl<<"Input code was ";
    for(int i=0;i<expression_size;i++)
    {
        cout<<expression[i];
    }
}
int logger()
{
    string username,password;
    cout<<"May i know who are you? Just your name Please.\n>>>";
    getline(cin,username);
   // if(username_exist(username))
    {
        cout<<"Okay just one more thing Mr. "<<username<<"What was the secret word you told me to remember for keeping our chat secret!\n>>>";
        getline(cin,password);
    }
    return 1;
}
