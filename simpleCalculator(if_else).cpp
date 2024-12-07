// PROGRAM IN C++ TO IMPLEMENT SIMPLE CALCULATOR


    #include <iostream>
    using namespace std;

    int main()
{
    int a, b;

    char op;

    cout<<"\nSimple Calculator\n";
    cin >> a >> op >> b;
    if (op == '+')
    cout << a + b;
    else if(op == '-')
    cout << a - b;
    else if(op == '*')
    cout << a * b;
    else if(op == '/')
    cout << (float)a / b;
    else
    cout << "Invalid operator";

    return 1;
}