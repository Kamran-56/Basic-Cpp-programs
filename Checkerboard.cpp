/* Write a program to print a checkerboard pattern of size n x n: 
# # # #  
# # # # 
# # # # 
# # # # 
Use nested loops and an if-else condition to determine whether to print # or a space. */


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the checkerboard: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "# ";
            else
                cout << " "; // Print a space when the condition is false
        }
        cout << endl;
    }

    return 0;
}
