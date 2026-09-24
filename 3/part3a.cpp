#include <iostream>
using namespace std;
void menu()
{
    int choice;
    cout << "\n\n===== RESTAURANT MENU =====";
    cout << "\n1. Pizza";
    cout << "\n2. Burger";
    cout << "\n3. Pasta";
    cout << "\n4. Exit";
    cout << "\nEnter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "You selected Pizza\n";
        cout << "\n-----PIZZAS-----";
        cout << "\n1. PEPPERONI";
        cout << "\n2. EXTRA CHEESE";
        cout << "\n3. MARGERITA\n"; 
 
        cout << "\nEnter your choice : ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "You selected Pepperoni : 399";
        }
        else if(choice == 2)
        {
            cout << "You selected Extra Cheese : 199";
        }
        else if(choice == 3)
        {
            cout << "You selected Margerita : 299";
        }
        else
        {
            cout << "SORRY WE DON'T HAVE MORE OPTIONS IN PIZZA";
        }
        menu();
    }
    else if (choice == 2)
    {
        cout << "You selected Burger\n";
        cout << "\n-----BURGERS-----\n";
        cout << "\n1. Double Patty";
        cout << "\n2. Chicken Burger";
        cout << "\n3. Veg Patty\n";

        cout << "\nEnter your choice : ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "You selected Double Patty : 249";
        }
        else if(choice == 2)
        {
            cout << "You selected Chicken Burger : 299";
        }
        else if(choice == 3)
        {
            cout << "You selected Veg Patty : 199";
        }
        else
        {
            cout << "SORRY WE DON'T HAVE MORE OPTIONS IN BURGER";
        }
       menu();
    }
    else if (choice == 3)
    {
        cout << "You selected Pasta\n";
        cout << "\n-----PASTAS-----";
        cout << "\n1. WHITE SAUCE PASTA";
        cout << "\n2. RED SAUCE PASTA";
        cout << "\n3. SPAGHETTI";

        cout << "\nEnter your choice : ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "You selected White Sauce Pasta : 249";
        }
        else if(choice == 2)
        {
            cout << "You selected Red Sauce Pasta : 249";
        }
        else if(choice == 3)
        {
            cout << "You selected Spaghetti : 349";
        }
        else
        {
            cout << "SORRY WE DON'T HAVE MORE IN OPTIONS IN PASTAS";
        }
        menu();
    }
    else if (choice == 4)
    {
        cout << "\nThank you!";
    }
    else
    {
        cout << "\nInvalid choice!";
        menu();
    }
}
int main()
{
    menu();
    return 0;
}
