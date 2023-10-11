#include<iostream>
#include<conio.h>
using namespace std;
// swapping two numbers using pointer
void swaping(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}   
int main()

{
int a= 10;
int b= 20;
swaping(&a,&b);
cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
getch();
 return 0;
}