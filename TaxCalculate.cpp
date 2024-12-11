/* Write a program that calculates income tax based on the following slab: 
• Income <= ₹2,50,000: No tax 
• ₹2,50,001 - ₹5,00,000: 5% 
• ₹5,00,001 - ₹10,00,000: 20% 
• Above ₹10,00,000: 30% 
The program should accept an annual income as input and output the tax amount.  */

    #include <iostream>
    using namespace std;

    int main()
{
    double income, tax = 0;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 400000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 600000) {
        tax = 15000 + (income - 400000) * 0.10;
    }
    else
    {
        tax = 35000 + (income - 600000) * 0.20;
    }

    cout <<"\nThe calculated tax is: " << tax << endl;
    return 0;
}