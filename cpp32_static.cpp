#include<iostream>
#include<conio.h>
using namespace std;
// using static function
class Account{
    static int ab;
    public:
   static void display(){
        cout<<"ab= "<<ab<<endl;
    }
};
// main function
int Account:: ab=100;
int main()
{
    Account a1, a2;
    Account::display();
 return 0;
}