#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;

    cout << "ENTER 5 CUSTOMER ORDER NUMBER : \n";

    for(int i = 0; i < 5; i++)
    {
        cin >> queue[rear];
        rear++;
    }

    cout << "\nPROCESSING ORDERS : \n";
    while (front < rear)
    
    {
        cout << "PROCESSED ORDER : " << queue[front] << endl;
        front++;
    }

    return 0;
}