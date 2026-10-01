#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;

    cout << "ENTER 5 TOKEN NUMBERS CUSTOMERS : \n";
    for(int i = 0; i < 5; i++)
    {
        cin >> queue[rear];
        rear++;
    }
    
    cout << "\n==========CUSTOMER SERVICE==========\n";
    
    while(front < rear)
    {
        cout << "SERVING TOKENS : \n" << queue[front] << endl;
        front ++;
    }

    return 0;
}