#include <iostream>
using namespace std;

int main()
{
    string student_name;
    string student_division;
    int physics;
    int chemistry;
    int maths;
    int total;
    float percentage;

    cout << "ENTER STUDENT NAME : ";
    cin >> student_name;

    cout << "ENTER STUDENT'S DIVISION : ";
    cin >> student_division;

    cout << "ENTER MARKS OF PHYSICS : ";
    cin >> physics;

    cout << "ENTER MARKS OF CHEMISTRY : ";
    cin >> chemistry;

    cout << "ENTER MARKS OF MATHS : ";
    cin >> maths;

    total = physics + chemistry + maths;

    cout << "TOTAL MARKS OBTAINED IN 3 SUBJECTS : " << total << endl;

    percentage = (total/300.0)*100;

    cout << "PERCENTAGE OBTAINED : " << percentage << endl;

    if(percentage >= 90 && percentage <= 100)
{
    cout << "A";
}
else if(percentage >= 80 && percentage < 90)
{
    cout << "B";
}
else if(percentage >= 70 && percentage < 80)
{
    cout << "C";
}
else if(percentage >= 60 && percentage < 70)
{
    cout << "D";
}
else if(percentage >= 40 && percentage < 60)
{
    cout << "E";
}
else
{
    cout << "FAIL";
}

    return 0;
}