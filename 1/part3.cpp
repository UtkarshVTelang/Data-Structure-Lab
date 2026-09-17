#include <iostream>
using namespace std;

int main()
{
    int book[5];
    int temp;

    cout << "ENTER IDs OF 5 BOOKS : ";

    for (int i = 0; i< 5; i++)
    {
        cin >> book[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            {
                if (book[j]>book[j+1])
                    {
                        temp = book[j];
                        book[j] = book[j+1];
                        book[j+1] = temp;

                    }
            }
                
    }

    cout << "\n BOOK IDs IN ASCENDING ORDER : ";

    for(int i = 0; i < 5; i++)
    {
        cout << book[i] <<  " ";
    }

    return 0;
}