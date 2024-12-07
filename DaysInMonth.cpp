//switch Statement to display  number of days in a Month

    #include<iostream>
    using namespace std;
    
    int main()
{
    int m;

    cout<<"Enter month number:\t";    
    cin >> m;
    switch (m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
        cout << 31;
        break;
        case 4: case 6: case 9: case 11:
        cout << 30;
        break;
        case 2:
        cout << "28 or 29";
        break;
        default:
        cout << "Invalid input";
    }

    return 0;
}
