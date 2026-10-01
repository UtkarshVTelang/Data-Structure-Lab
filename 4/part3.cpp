#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;
    int choice;

    cout << "\n===========BANK TOKEN SYSTEM===========\n";
    cout << "\n1. ISSUE A TOKEN";
    cout << "\n2. DISPLAY ALL TOKEN";
    cout << "\n3. SERVE CUSTOMER";
    cout << "\n4. EXIT";

    cout << "\nENTER YOUR CHOICE : ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "ENTER A TOKEN NUMBER : ";
        cin >> queue[rear];
        rear++;
        cout << "TOKEN ISSUED";
    }
    else if(choice == 2)
    {
        cout << "\n=====WAITING CUSTOMERS=====\n";
        for (int i = front; i < rear; i++)
        {
            cout << "TOKEN : " << queue[i] << endl;
        }
    }

    else if(choice == 3)
    {
        if(front < rear)
        {
            cout << "\nSERVING TOKEN : " << queue[front] << endl;
            front ++;
        }
        else
        {
            cout << "\nNO CUSTOMER WAITING";
        }
        
    }
    else if(choice == 4)
    {
        cout << "\nTHANK YOU";
    }
    else
    {
        cout << "\nINVALID CHOICE";
    }

    return 0;
   
}