#include <iostream>
using namespace std;

int main()
{
    int book[5];
    int searchID;

    cout << "ENTER 5 BOOK IDs : \n";

    for (int i = 0; i < 5; i++)
    {
        cin >> book[i];
    }

    cout << "\n ENTER THE SEARCH ID : ";
    cin >> searchID;

    for (int i = 0; i < 5; i++)
    {
        if(book[i]==searchID)
            {
                cout << "BOOK FOUND";
                return 0;
            }
    }
    cout << "BOOK NOT FOUND";
    return 0;
}
