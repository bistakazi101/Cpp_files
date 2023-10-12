#include <iostream>

using namespace std;

// Function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

// Function that takes two integers and returns their difference
int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Declare a function pointer that takes two integers and returns an integer
    int (*operation)(int, int);

    // Prompt the user to choose an operation
    cout << "Choose an operation (1 for add, 2 for subtract): ";
    int choice;
    cin >> choice;

    // Assign the function pointer based on user input
    if (choice == 1) {
        operation = &add;
    } else if (choice == 2) {
        operation = &subtract;
    } else {
        cout << "Invalid choice" << endl;
        return 1;
    }

    // Call the function through the function pointer
    int result =  (*operation)(3, 4);
    cout << "Result: " << result << endl;

    return 0;
}
