#include<iostream>
#include<conio.h>
using namespace std;
// function template
template <class T>
void add(T a, T b)
{
    cout <<"addition is "<< a+b << endl;
}
template <class hellow>
hellow displaymessage(hellow T)
{
  return T;
}
int main()
{
    string h= displaymessage("hello world");
    cout << h << endl;
    int a = displaymessage(10);
    cout << a << endl;  
     getch();
     return 0;
}