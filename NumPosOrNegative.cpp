//PROGRAM IN C++ TO CHECK WETHER A NUMBER IS POSITIVE OR NEGATIVE


    #include <iostream>
    using namespace std;

    int main()
{
    int num;

    cout<<"Enter any integer\t";
    cin >> num;
    if (num > 0)
    cout << "Positive";
    else if (num < 0)
    cout << "Negative";
    else cout << "Zero";
    
    return 1;
}
