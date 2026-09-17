#include <iostream>
using namespace std;

int main()
{
    int rollno[5];

    cout << "ENTER ROLL NUMBER OF 5 STUDENTS : \n";

    for (int i = 0; i < 5; i++)
    {
        cin >> rollno[i];
    }

    cout << "STUDENTS ROLL NUMBER : \n";

    for (int i = 0; i < 5; i++)
    {
        cout << rollno[i] << endl;
    }

    return 0;

}