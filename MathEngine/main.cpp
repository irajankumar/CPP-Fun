#include <iostream>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int solve(string);
int help();
int main()
{
    cout << "Welcome to MathEngine.! Let's Start..." << endl;
    string expression;
    A:
    while(1)
    {
    cout<<"\nMathEngine>";
    getline(cin,expression);
    if(expression=="exit")
            exit(0);
    else if((expression=="?")|| expression=="HELP" || expression=="help")
    {
        cout<<"\n Welcome to help Menu of MathEngine. Following are the topics for help:\n1.Functions\n2.Supported Operations\n3.Syntax Guidlines";
      help();
    }
    else if(isdigit(expression[0]))
            {
                    solve(expression);

            }
    else
    {
        cout<<"There may be syntax error. Type help for help about Commands";
       goto A;
    }
    }

    return 0;
}
int solve(string expression)
{
    for(int i=0; i<expression.length();i++)
    {
        if(isdigit(expression[i]))

    }
    cout<<

    return 0;
}
int help()
{
    cout<<"\nThank you for using help Utility";
    return 0;
}
