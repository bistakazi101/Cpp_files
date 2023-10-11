#include <iostream>
using namespace std;
// using void pointer
int main() {
    int num = 10;
    void* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *(int*)ptr << endl;

    return 0;
}
