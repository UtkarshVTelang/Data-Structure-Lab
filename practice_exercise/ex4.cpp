#include <iostream>
using namespace std;

int main()
{
    char UL;
    char LL;
    int D;
    string SC;
    
    cout << "\nENTER YOUR FIRST LETTER : ";
    cin >> UL;
                if(UL>=65 && UL<=90)
                        {
                            cout << "It is a uppercase letter" << endl;
                        }
                        else
                            {
                                cout << "It is not a uppercase letter" << endl;
                            }

    cout << "\nENTER YOUR SECOND LETTER : ";
    cin >> LL;
                if(LL>=97 && LL<=122)
                        {
                            cout << "It is a lowercase letter" << endl;;
                        }
                        else
                            {
                                cout << "It is not a lowercase letter" << endl;
                            }

    cout << "\nENTER A DIGIT : ";
    cin >> D;
                if(D=48 && D<=57)
                        {
                            cout << "It is a digit" << endl;
                        }
                        else
                            {
                                cout << "It is not a digit" << endl;
                            }

    cout << "\nENTER A SPECIAL CHARACTER : ";
    cin >> SC;
                if(SC[0]>=33 && SC[0]<=47)
                        {
                            cout << "Its is a special character" << endl;
                        }
                        else
                            {
                                cout << "It is not a special character" << endl;
                            }

                            return 0;
    

}