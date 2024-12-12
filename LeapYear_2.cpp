/* Write a program that checks if a given year is a leap year. 
• Use nested if-else for the logic: 
o A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400. 
• Add logic to print the next 5 leap years if the input year is not a leap year. */


    #include<iostream>
    using namespace std;

    int main()
{
    int year;
    cout << "\nEnter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year.\n\n 4 consecutive leap years after " << year << ":" << endl;
        int count = 1;
        while(count <= 4)
        {
            year++;
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                cout << year <<endl;
                count++;
            }
        }
    }

    return 0;
}