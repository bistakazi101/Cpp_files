#include<iostream>
#include<conio.h>
using namespace std;
class student{
   private:
    int a , b;
    public:
    void insert(int a , int b ){
        {
            this->a= a;
            this->b= b;

        }
   
}
     void display()
        {
            cout<<"a= "<<this->a<<endl;
            cout<<"b= "<<this->b<<endl;
        }
};

int main()
{
    student s1;
    s1.insert(10,20);
    s1.display();
 return 0;
}