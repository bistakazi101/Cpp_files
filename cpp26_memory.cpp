#include <iostream>

using namespace std;



int main() {
    int a;
    cout<<"enter the number";
    cin>>a;
    int *p;
    p = new int[sizeof(a)];
    cout<<"The size of integer is :";
    cout<<sizeof(a);
    delete p;
    return 0;
}

