#include <iostream>
using namespace std;

int main()
{
    int employee_id;
    string employee_name;
    float employee_salary;
    char department_code;
    bool active_status;

    cout << "----------ENTER EMPLOYEE RECORD-----------\n"; 
    
    cout << "ENTER EMPLOYEE ID : ";
    cin >> employee_id;

    cout << "ENTER EMPLOYEE NAME : ";
    cin >> employee_name;

    cout << "ENTER EMPLOYEE SALARY : ";
    cin >> employee_salary;
    
    cout << "ENTER DEPARTMENT CODE : ";
    cin >> department_code;

    cout << "ENTER ACTVE STATUS (1 = present, 0 = absent) : ";
    cin >> active_status;

    cout << "----------EMPLOYEE RECORD----------\n";

    cout << "\nEMPLOYEE ID : " << employee_id;
    cout << "\nEMPLOYEE NAME : " << employee_name;
    cout << "\nEMPLOYEE SALARY : " << employee_salary;
    cout << "\nEMPLOYEE DEPARTMENT CODE : " << department_code;
    cout << "\nEMPLOYEE ACTIVE STATUS : " << active_status;

    return 0;

    
}