/* Write a program that takes two integers and a character representing
  an operation (+, -, *, /) as input from the user and uses a switch statement
  to perform the appropriate arithmetic operation and print the result. */
    

    #include <iostream>
    using namespace std;

    int main()
{
    int a, b;
    char op;
    cout << "\n\tBasic Calculator\n";
    cin >> a >> op >> b;
    switch (op)
    {
        case '+':
        cout << a + b;
        break;
        case '-':
        cout << a - b;
        break;
        case '*':
        cout << a * b;
        break;
        case '/':
        cout << (float)a / b;     // using type cast here
        break;
        default:
        cout << "Invalid operator";
    }
}