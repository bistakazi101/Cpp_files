#include<iostream>
#include<conio.h>
using namespace std;
// parameter template
template <class H, class L>
void display(H a, L b){
    cout<<a<<endl;
    cout<<b<<endl;
}
int main()
{
    display("The total number is ", 10);
 return 0;
}