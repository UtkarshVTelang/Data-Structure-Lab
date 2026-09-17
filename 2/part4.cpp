#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int rollno[5];

    int n = 0;
    int choice;
    int searchroll;

    cout << "\n----------STUDENT MANAGEMENT SYSTEM----------\n";

    cout << "\n 1. ADD STUDENT";
    cout << "\n 2. DISPLAY STUDENT";
    cout << "\n 3. SEARCH STUDENT";
    cout << "\n 4. EXIT";

    cout << "\nENTER YOUR CHOICE : ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "ENTER ROLL NUMBER : ";
        cin >>  rollno[n];

        cout << "ENTER MARKS : ";
        cin >> marks[n];

        cout << "DATA STORED";
    }
    else if(choice == 2)
    {
        cout << "\n----------STUDENT RECORD---------\n";

        for(int i = 0; i < n; i++)
        {
            cout << "ROLL NUMBER : " << rollno[i] << endl;
            cout << "MARKS : " << marks[i] << endl;
        }
    }
    else if(choice == 3)
    {
        cout << "ENTER THE ROLL NUMBER TO SEARCH : ";
        cin >> searchroll;

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (rollno[i] == searchroll)
            {
                cout << "STUDENT FOUND" << endl;
                cout << "ROLL NUMBER : " << rollno[n] << endl;
                cout << "MARKS : " << rollno[n] << endl;

                found = true;
            }
            
        }
        if (!found)
        {
            cout << "STUDENT NOT FOUND";
        }
    }
    else if(choice == 4)
    {
        cout << "THANK YOU";
    }
    else
    {
        cout << "INVALID CHOICE";
    }

    cout << "\nENTER YOUR NEXT CHOICE : ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "ENTER ROLL NUMBER : ";
        cin >>  rollno[n];

        cout << "ENTER MARKS : ";
        cin >> marks[n];

        cout << "DATA STORED";
    }
    else if(choice == 2)
    {
        cout << "\n----------STUDENT RECORD---------\n";

        for(int i = 0; i < n; i++)
        {
            cout << "ROLL NUMBER : " << rollno[i] << endl;
            cout << "MARKS : " << marks[i] << endl;
        }
    }
    else if(choice == 3)
    {
        cout << "ENTER THE ROLL NUMBER TO SEARCH : ";
        cin >> searchroll;

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (rollno[i] == searchroll)
            {
                cout << "STUDENT FOUND" << endl;
                cout << "ROLL NUMBER : " << rollno[n] << endl;
                cout << "MARKS : " << rollno[n] << endl;

                found = true;
            }
            
        }
        if (!found)
        {
            cout << "STUDENT NOT FOUND";
        }
    }
    else if(choice == 4)
    {
        cout << "THANK YOU";
    }
    else
    {
        cout << "INVALID CHOICE";
    }


    return 0;
}