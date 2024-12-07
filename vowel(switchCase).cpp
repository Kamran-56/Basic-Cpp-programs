// Program 10: switch Statement for Character Analysis

    #include<iostream>
    using namespace std;

    int main()
{
    char ch;

    cout<<"\nEnter any alphabet:\t";
    cin >> ch;
    switch (ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        cout << "Vowel";
        break;
        default:
        cout << "Consonant";
    }
    return 1;
}
