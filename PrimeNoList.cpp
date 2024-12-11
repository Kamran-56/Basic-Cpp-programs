/* Write a program that accepts a number n and prints all prime numbers less than or equal to n. 
Use a while loop and a function to check if a number is prime.*/


    #include<iostream>
    using namespace std;

    int primeNumberList(int x);

    int main()
{
    int i = 2, num;
    cout << "Enter any natural number: ";
    cin >> num;
    
    cout << "Prime numbers less than or equal to " << num << " are: " << endl;
    while(i <= num)
    {
        if(primeNumberList(i) == 1)
        {
            cout << i << " ";
        }
        i++;
    }
    
    return 0;
    }

    int primeNumberList(int x)
{
    if(x <= 1)
        return 0;

    for(int i = 2; i <= x/2; i++)
    {
        if(x % i == 0)
            return 0;
    }
    
    return 1;
}
