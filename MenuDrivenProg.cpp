/* Create a menu-driven program that allows the user to perform the following operations 
repeatedly: 
1. Find the factorial of a number. 
2. Find the GCD of two numbers. 
3. Find the LCM of two numbers. */


#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice, num1, num2;
    
    do {
        cout << "Menu:\n";
        cout << "1. Find the factorial of a number\n";
        cout << "2. Find the GCD of two numbers\n";
        cout << "3. Find the LCM of two numbers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Factorial of " << num1 << " is " << factorial(num1) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);

    return 0;
}
