#include <iostream>
#include <conio.h>
using namespace std;
// nested ifelse
int main()
{
    int num = 10;
    printf("enter the number");
    scanf("%d", &num);
    if (num < 0 || num > 100)
    {
        printf("value exceeds the number");
    }
    else if (num >=40 && num < 60)
    {
        printf("second division"); 
    }
    else if (num >=60 && num < 80)
    {
        printf("First Division");
    }
    else if (num >=80 && num < 100)
        printf("Distinction");
    return 0;
}