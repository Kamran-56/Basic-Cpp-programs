/* Create a simple calculator using a switch statement. The program should ask the user to input 
two numbers and a choice of operation (+, -, *, /, %). Implement each operation in a separate 
function and call the appropriate function based on the user's input. */

    #include<iostream>
    using namespace std;

    void calculate(double a,  char op, double b) {
    switch (op)
    {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
            {
                cout << "Result: " << a / b << endl;
            }
            else
            {
                cout << "Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    }

    int main()
{
    double num1, num2;
    char op;
    cout << "BASIC CALCULATOR (+, -, *, /):"<< endl;
    cin >> num1 >> op >> num2;
    calculate(num1, op, num2);

    return 0;
}
