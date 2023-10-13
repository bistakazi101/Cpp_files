/**
 * @brief This program demonstrates the use of classes and objects in C++.
 * 
 */
#include<iostream>
#include<conio.h>
using namespace std;

class student{
    private: 
    int a;
    int b;
    public:
    void getdate(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
/**
 * @brief The main function creates an object of the student class, sets its date using the getdate function, and displays the student's information using the display function.
 * 
 * @return int 
 */
int main()
{
    student s1;
    s1.getdate(10,20);
    s1.display();
 return 0;
}