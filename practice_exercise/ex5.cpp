#include <iostream>
using namespace std;

int main()
{
    string password;
    
    cout << "ENTER THE PASSWORD : ";
    cin >> password;

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    if(password.length() >= 8)
    {
        for (int i = 0; i < password.length(); i++)
        {
            if(password[i] >= 'A' && password[i] <= 'Z')
                upper = true;

            if(password[i] >= 'a' && password[i] <= 'z')
                lower = true;
            
            if (password[i] >= '0' && password[i] <= '9')
                digit = true;
                
            if(password[i] >= 33 && password[i] <= 47)
                special = true;    
        }

        if(upper && lower && digit && special)
        {
            cout << "PASSWORD IS VALID";
        }
        else
        {
            cout << "PASSWORD IS INVALID";
        }
    }
    else
    {
        cout << "PASSWORD IS INVALID";
    }
   
    return 0;

    
}