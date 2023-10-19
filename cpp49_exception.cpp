#include<iostream>
#include<conio.h>
using namespace std;
// exception handling
float division(int a,int b)
{
    if(b==0)
    {
        throw "Division by zero condition!";
    }
    return (a/b);
}
int main()
{
    int i =25;
    int j=0;
    float k;
    try{
    k=division(i,j);
    cout << k;}
    catch(const char* e){
        cout << e;
    }
 return 0;
}