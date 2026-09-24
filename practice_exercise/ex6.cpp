#include <iostream>
using namespace std;

int main()
{
    for(int attempt= 1; attempt <= 3; attempt++)
        {
            string username;
            string password;

            cout << "\n----------ATTEMPT " << attempt << "---------\n";

            cout << "ENTER USERNAME : ";
            cin >> username;

            cout << "ENTER PASSWORD : ";
            cin >> password;

            bool upper = false;
            bool lower = false;
            bool digit = false;
            bool special = false;;
            bool isuservalid = false;
            bool ispassvalid = false;

            if(username.length())
            {
                for(int i = 0; i < username.length(); i++)
                {
                    if(username[i] >= 'A' && username[i] <= 'Z')
                        upper = true;

                    if(username[i] >= 'a' && username[i] <= 'z')
                        lower = true;     
                }

                if(upper && lower)
                {
                    cout << "Username is valid\n";
                    isuservalid = true;
                }
                else if(!upper)
                {
                    cout << "Username is invalid\n";
                    cout << "USE UPPERCASE ALSO\n";
                }
                else
                {
                    cout << "Username is invalid\n";
                    cout << "USE LOWERCASE\n";
                }
            }
            else
            {
                cout << "Username is invalid";
            }

            if(password.length())
            {
                for(int j = 0; j < password.length(); j++)
                {
                    if(password[j] >= '0' && password[j] <= '9')
                        digit = true;
                    
                    if(password[j] >= 33 && password[j] <= 47)
                        special = true;    
                }
                if(digit && special)
                {
                    cout << "Password is valid\n";
                    ispassvalid = true;
                }
                else if(!digit)
                {
                    cout << "Password is invalid\n";
                    cout << "ADD NUMBER";
                }
                else
                {
                    cout << "Password is invalid\n";
                    cout << "ADD A SPECIAL CHARACTER";
                }
            }
            else 
            {
                cout << "Password is invalid";
            }

            if(isuservalid && ispassvalid)
            {
                cout << "\nLogin is successful\n";
                break;
            }
            else
            {
                cout << "\nLogin is unsuccessful\n";

                if(!isuservalid && !ispassvalid)
                {
                    cout << "REASON : BOTH USERNAME AND PASSWORD ARE WRONG";
                }
                else if(!isuservalid)
                {
                    cout << "REASON : USERNAME IS WRONG";
                }
                else
                {
                    cout << "REASON : PASSWORD IS WRONG";
                }

                if(attempt == 3)
                {
                    cout << "\nMAXIMUM ATTEMPTS REACHED";
                }
                else if(attempt == 2)
                {
                    cout << "\nONLY ONE ATTEMPT LEFT";
                }
                else
                {
                    cout << "\nPLEASE TRY AGAIN";
                }
            }
        }
        
        return 0;
}