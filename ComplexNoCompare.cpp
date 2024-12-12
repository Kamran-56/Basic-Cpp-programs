/* Write a program that accepts two complex numbers (real and imaginary parts) and compares 
them. 
• Use if-else to determine which complex number has a higher magnitude. 
• Print "Equal" if they have the same magnitude. */


    #include<iostream>
    #include<cmath>
    using namespace std;

    
    int main()
{
    double a1, b1, a2, b2;

    cout << "For z1 = a1 + ib1 , Enter value of a1: ";
    cin >> a1;
    cout << "Enter value of b1: ";
    cin >> b1;

    cout << "For z2 = a2 + ib2 , Enter value of a2:  ";
    cin >> a2;
    cout << "Enter value of b2: ";
    cin >> b2;

    double mag1 = sqrt(a1 * a1 + b1 * b1);
    double mag2 = sqrt(a2 * a2 + b2 * b2);

    if (mag1 > mag2)
    {
        cout << "The first complex number has a higher magnitude." << endl;
    }
    else if (mag1 < mag2)
    {
        cout << "The second complex number has a higher magnitude." << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}