#include <iostream>
using namespace std;

int main()
{
    int rollno[5];
    int searchroll;

    cout << "ENTER THE ROLL NUMBERS OF STUDENTS : \n";

    for (int i = 0; i < 5; i++)
    {
        cin >> rollno[i];
    }

    cout << "\nENTER THR ROLL NUMBER TO SEARCH : ";
    cin >> searchroll;

    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (rollno[i] == searchroll)
        {
            found = true;
        }
    }

    if(found)
    {
        cout << "STUDENT FOUND";
    }
    else
    {
        cout << "STUDENT NOT FOUND";
    }

    return 0;
}