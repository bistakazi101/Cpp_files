// passing the array
#include<iostream>
#include<conio.h>
using namespace std;
void function(int arr[5]){
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
}

/**
 * @brief This program demonstrates the usage of arrays and function calls.
 * 
 * The program initializes two arrays, 'a' and 'b', with 5 integers each and calls the function 'function' with each array as an argument.
 * 
 */
int main()
{
    int a[5]={1,2,3,4,5};
        int b[5]={6,7,8,9,10};
function(a);
function(b);
    getch();

 return 0;
}