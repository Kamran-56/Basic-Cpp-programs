//Prime Number Check(using for loop and if else)

    #include<iostream>
    using namespace std;

    int main()
{
    int num, flag;
    cout<<"\nEnter any positive integer\t";
    cin>>num;

    if (num > 1)
    {
        for(int i = 2; i < num/2; i++)
        {
            if(num % i == 0)
            {
             flag = 0;
            }
        }

        if(flag)
            cout<<"\nPrime Number";
        else
        cout<<"\nNot prime";
    }
    else
    cout<<"\nEnter an integer greater than 1";

    return 0;
}
