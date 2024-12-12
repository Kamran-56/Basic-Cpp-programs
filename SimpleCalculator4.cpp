/*  Create a calculator program that takes two operands and an operator (+, -, *, /, %). 
• Use the conditional operator to implement the operations. 
• Display an error message if the operator is invalid or if a division by zero is attempted.
*/
    
    #include <iostream>
    using namespace std;

    int main()
{
    double num1, num2, result;
    char op;

    cout <<"\n\t\tSimple Calculator\n";
    cin >> num1;
    cin >> op;
    cin >> num2;

    result = (op == '+') ? num1 + num2 :                //using conditional operator
             (op == '-') ? num1 - num2 :
             (op == '*') ? num1 * num2 :
             (op == '/' && num2 != 0) ? num1 / num2 :
             (op == '%') ? (int)num1 % (int)num2 : -1;

    if(result == -1)
    {
        if (op == '/' && num2 == 0)
        cout << "\nCannot divivde by 0 !";
        else
        cout << "\nInvalid operator!";
    }
    else
    cout <<"\nResult = " <<result;
    return 0;
}