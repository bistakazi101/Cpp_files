#include<iostream>
#include<conio.h>
using namespace std;
// struct keyword
struct shape{
    int length;
    int width;
    int height;
    };
int main()
{
    shape cube;
    cube.length= 10;
    cube.width= 10;
    cube.length= 10;
    cout<<"Length of cube is: "<<cube.length<<endl;
    cout<<"Width of cube is: "<<cube.width<<endl;
    cout<<"Height of cube is: "<<cube.height<<endl;
 return 0;
}