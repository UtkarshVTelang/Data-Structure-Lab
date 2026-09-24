#include <iostream>
using namespace std;

int main()
{
    int roll_number;
    string student_name;
    float CGPA;
    char grade;
    bool pass_or_fail;

    cout << "----------ENTER STUDENT DETAILS----------\n";

    cout << "ENTER STUDENT ROLL NUMBER : ";
    cin >> roll_number;
    
    cout << "ENTER STUDENT NAME : ";
    cin >> student_name;

    cout << "ENTER CURRENT CGPA : ";
    cin >> CGPA;

    cout << "ENTER GRADE : ";
    cin >> grade;

    cout << "ENTER STATUS (1 = PASS, 0 = FAIL) w : ";
    cin >> pass_or_fail;

    cout << "---------STUDENT INFORMATION----------";

    cout << "\nROLL NUMBER : " << roll_number;
    cout << "\nSTUDENT NAME : " << student_name;
    cout << "\nCURRENT CGPA : " << CGPA;
    cout << "\nGRADE : " << grade;
    cout << "\nSTATUS : " << pass_or_fail;

    return 0;

}