/*Write a program that takes a student's score (out of 100) as input and displays the grade based on 
the following criteria: 
• A: 90-100 
• B: 80-89 
• C: 70-79 
• D: 60-69 
• F: Below 60 
Use if-else statements for this.*/


    #include <iostream>
    using namespace std;

    int main()
{
    int score;
    cout<<"Enter score of the student: ";
    cin >> score;

    if (score >= 90)
    cout << "A";
    else if (score >= 80)
    cout << "B";
    else if (score >= 70)
    cout << "C";
    else if (score >= 60)
    cout << "D";
    else
    cout << "F";

    return 0;
}