/* Write a program that generates the following pyramid pattern for a given number of rows n: 
 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

    #include<iostream>
    using namespace std;

    int main()
{
    int i, j, k, n;
    cout << "Enter no of rows:"<<endl;
    cin >> n;
    cout<<"\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            printf(" "); 
        }
            for (k = 1; k <= i; k++)
            {
            printf(" %d", k);               // add space on left or right of *//
            }
    printf("\n");
    }

    return 0;
}