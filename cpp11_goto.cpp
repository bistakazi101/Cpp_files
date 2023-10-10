#include<iostream>
#include<conio.h>
using namespace std;
int main()
//lets create a gotos tatements
{
int i=1;
loop_start:
if (i<=5)
{
    cout<<"Loop start"<<i<<endl;
    i++;
    goto loop_start;
}

jump_statement:
cout<<"Jump statements";

if (i<=5)
{
    goto jump_statement;
    i++;
}

 return 0;
}