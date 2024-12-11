/* Write a program that checks whether a given year is a leap year.
A year is a leap year if: 
• It is divisible by 4, 
• But not divisible by 100, 
• Unless it is also divisible by 400. 
The program should handle invalid inputs gracefully. */

    #include<iostream>
    using namespace std;

    int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}