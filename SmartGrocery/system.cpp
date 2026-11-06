#include <iostream>
using namespace std;

int main()
{
    int grocery[7];
    int n = 0;
    int choice;
    int searchid;
    int found;

    while(true)
    {
            cout << "\n----------Smart Grocery Management System----------\n";
            cout << "\n1) Add Grocery";
            cout << "\n2) Display Grocery";
            cout << "\n3) Search Grocery";
            cout << "\n4) Delete Grocery";
            cout << "\n5) Exit";

            cout << "\nENTER YOUR CHOICE : ";
            cin >> choice;

            if(choice == 1)
            {
                cout << "\nENTER YOUR GROCERY  ID : ";
                cin >> grocery[n];
                n++;
                cout << "Grocery Added";
            }

            else if(choice == 2)
            {
                cout << "\nGrocery in list : \n";
                for(int i = 0; i < n; i++)
                {
                    cout << grocery[i] << endl;
                }
            }

            else if(choice == 3)
            {
                cout << "\nEnter grocery ID to search : ";
                cin >> searchid;
                
                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(grocery[i] == searchid)
                    {
                        found = 1;
                        break;
                    }
                }
                if(found == 1)
                {
                    cout << "Grocery found";
                }
                else
                {
                    cout << "Gorcery not Found";
                }
            }

            else if(choice == 4)
            {
                cout << "\nEnter grocery ID you want to delete : ";
                cin >> grocery[n];
                
                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(grocery[i] == searchid)
                    {
                        found = 1;
                        n--;
                        break;
                    }
                }
                if(found = 1)
                {
                    cout << "Grocery Deleted";
                }
                else
                {
                    cout << "Grocery not deleted";
                }
                
            }

            else if(choice == 5)
            {
                cout << "Thank You";
            }
            else
            {
                cout << "Invalid choice";
            }

            
    }    
    
    return 0;
}