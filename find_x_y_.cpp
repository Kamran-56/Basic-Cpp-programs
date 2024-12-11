/* Write a program to find and print all pairs (x, y) such that: 
• x^2 + y^2 = n 
where n is an input number, and both x and y range from 0 to sqrt(n). Use break and 
continue statements to optimize the solution. */


    #include<iostream>
    #include<cmath>
    using namespace std;

    int main()
{
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    int limit = sqrt(n);

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << " are: " << endl;

    for (int x = 0; x <= limit; x++)
    {
        for (int y = 0; y <= limit; y++)
        {
            if (x*x + y*y == n)
            {
                cout << "(" << x << ", " << y << ")" << endl;
                continue;
            }
        }
    }

    return 0;
}
