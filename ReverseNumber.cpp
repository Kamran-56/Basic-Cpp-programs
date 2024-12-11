/* Write a program that repeatedly asks the user to input a positive integer and then reverses the 
digits of the number. For example, input 1234 should output 4321. Stop the program when the 
user enters 0. */

    #include<iostream>
    using namespace std;

    int main()
{
    int num, rem , rev , choice;
    do
    {
        rem = rev = 0;
        cout << "Enter any number:\t" << endl;
        cin >> num;
        while(num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        cout << rev <<endl;
        cout<<"choice:\t";
        cin >> choice;

    } while(choice);

    return 1;
}

    