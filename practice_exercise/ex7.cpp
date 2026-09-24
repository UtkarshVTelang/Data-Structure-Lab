#include <iostream>
using namespace std;

int main()
{
    string answer;
    int score = 0;

    cout << "Q1. Is C++ a progamming language(yes/no) : ";
    cin >> answer;

        if(answer == "yes")
        {
            score++;
        }

    cout << "\nQ2. Is Python a compiled language(yes/no) : ";
    cin >> answer;

        if(answer == "no")
        {
            score++;
        }

    cout << "\nQ3. Is 'int' a data type in C++(yes/no) : ";
    cin >> answer;

        if(answer == "yes")
        {
            score++;
        }

    cout << "\nYour score : " << score << " out of 3" << endl;
        if(score >= 2)
        {
            cout << "Pass\n";
            cout << "AAP MUMBAI AA SAKTE HO";
        }
        else
        {
            cout << "Fail\n";
            cout << "AAP MUMBAI SE JAA SAKTE HO";
        }

    return 0;
}