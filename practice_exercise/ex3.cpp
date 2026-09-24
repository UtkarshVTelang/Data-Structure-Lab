#include <iostream>
using namespace std;

int main()
{
    int age;
    string citizen; 

    cout << "ARE YOU CITIZEN OF INDIA (yes/no) : ";
    cin >> citizen;

    if(citizen == "yes")
    {
        cout << "ENTER YOUR AGE (>=18) : ";
        cin >> age;

        if(age >= 18)
        {
            cout << "YOU CAN REGISTER FOR VOTING" << endl;
        }
        else
        {
            cout << "YOU CANNOT REGISTER FOR VOTING (MUST BE 18 OR OLDER)" << endl;
            cout << "YEARS LEFT UNTIL ELIGIBLE" << 18-age << endl;
        }
    }
    else
    {
        cout << "YOU ARE NOT ELIGIBLE TO VOTE IN INDIA (CITIZENSHIP REQUIRED)";
    }

    return 0;
}