#include <iostream>
#include <conio.h>
using namespace std;
// single inheritance declaration
class Account
{
    public:
    float salary = 60000;
};

class programmer : public Account
{
    float bonus = 5000;

public:
    float totalSalary = bonus;
};

int main()
{
    programmer p1;
    cout << "Salary: " << p1.totalSalary << endl;
  cout<< p1.salary;
    
    getch();
    return 0;
}