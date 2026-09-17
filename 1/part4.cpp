#include <iostream>
using namespace std;

int main()
{
    int book[10];
    int n = 0;
    int choice;
    int searchID;

    cout << "\n==========SMART LIBRARY==========";

    cout << "\n 1. ADD BOOK";
    cout << "\n 2. DISPLAY BOOKS";
    cout << "\n 3. SEARCH BOOK";
    cout << "\n 4. EXIT PROGRAM";

    cout << "\n ENTER YOUR CHOICE : ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "\n ENTER THE BOOK ID : ";
        cin >> book[n];
        n++;
        cout << "\n BOOK ADDED";
    }
    
    else if (choice == 2)
    {
        cout << "\n BOOKS IN LIBRARY : ";
        for (int i = 0; i < n; i++)
        {
            cout << book[i] << endl;
        }
    }
    
    else if (choice == 3)
    {
        cout << "\n ENTER BOOK ID TO SEARCH : ";
        cin >> searchID;
        
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (book[i]==searchID)  
            {
                found = true;
            }
        }

        if(found)
        {
            cout << "BOOK FOUND";
        }
        else
        {
            cout << "BOOK NOT FOUND";
        }
    }

    else if (choice == 4)
    {
        cout << "THANK YOU";
    }
    else
    {
        cout << "INVALID CHOICE";
    }

    return 0;
}