#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    cout << "ENTER 5 SERVED CUSTOMER TOKEN NUMBERS : \n";

    for(int i = 1; i < 5; i++)
    {
        top++;
        cin >> stack[top];
    }

    cout << "\n===========SERVICE HISTORY==========\n";

    while(top>=0)
    {
        cout << "TOKEN : " << stack[top] << endl;
        top--;
    }

    return 0;
}