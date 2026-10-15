#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    char op;

    cout << "ENTER FIRST NUMBER : " ;
    cin >> num1;

    cout << "ENTER OPERATOR (+, -, *, /) : ";
    cin >> op;

    cout << "ENTER SECOND NUMBER : ";
    cin >> num2;

    switch(op)
    {
        case '+':
                    cout << "\nRESULT = " << num1+num2;
                    break;

        case '-':
                    cout << "\nRESULT = " << num1-num2;
                    break;
        case '*':
                    cout << "\nRESULT = " << num1*num2;
                    break;
        case '/': 
                    if(num2 != 0)
                    {
                        cout << "\nRESULT = " << num1/num2;
                    }       
                    else
                    {
                        cout << "\nCannot divide by zero";
                    }
                    break;
                    
        default:
                 cout << "\nInvalid Operator";
                 
        return 0;         
    }
}