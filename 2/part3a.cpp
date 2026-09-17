#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int temp;

    cout << "ENTER MARKS OF 5 STUDENTS : ";
    
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (marks[j] > marks[j+1])
            {
                temp = marks[j];
                marks [j] = marks[j+1];
                marks[j+1] = temp;
            }
        }
    }

    cout << "STUDENT MARKS IN ASCENDING ORDER : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
    
}