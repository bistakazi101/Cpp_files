#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a= 10;
    int *p=&a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"adress of a : "<<&a<<endl;
    cout<<"value of p : "<<p<<endl;
    cout<<"value of *p : "<<*p<<endl;
    cout<<"adress of p : "<<&p<<endl;
    getch();
 return 0;
}