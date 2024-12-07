//PROGRAM IN C++ TO CHECK WETHER A PERSON IS CHILD , TEENAGER, ADULT OR SENIOR BASED UPON AGE INPUT BY USER

    #include<iostream>
    using namespace std;

    int main()
{
    int age;

    cout<<"\nEnter age\t";
    cin>>age;
    if(age > 0)
    {
        if (age <= 12)         // no need to add braces unless multiple statements
        cout << "Child";
        else if(age > 12 && age <= 18)
        cout << "Teenager";
        else if (age > 18 && age <= 60)
        cout << "Adult";
        else
        cout << "Senior";
    }
    else
    cout<<"Enter correct age!!!";

    return 1;
}
