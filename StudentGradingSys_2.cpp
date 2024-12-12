/* Write a program that accepts a student’s marks in 5 subjects. 
• Use nested if-else to assign grades (A, B, C, D, F) based on the percentage. 
• If the student fails in more than one subject, print "Repeat Year" regardless of percentage. */



    #include<iostream>
    using namespace std;

    
    int main()
{
    int marks[4];
    int failcount = 0, mo = 0;
    float percentage,  mm = 250;

    cout << "\nenter marks out of 50:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        mo += marks[i];
        
        if(marks[i] < 20)
        failcount++;
    }
    
    percentage = (mo / mm) * 100;
    cout << "\nPercentage: " << percentage << "%" << endl;

    if(failcount > 1)
    cout << "Repeat Year!!!";
    else
    {
        if(percentage > 89)
            cout << "Grade A" << endl;
        else if(percentage > 79)
            cout << "Grade B" << endl;
        else if(percentage > 69)
            cout << "Grade C" << endl;
        else if(percentage > 49)
            cout << "Grade D" << endl;
        else
            cout << "Grade F" << endl;
    }

    return 0;
}