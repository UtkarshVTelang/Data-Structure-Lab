#include <iostream>
using namespace std;

int main()
{
    int N;
    int sum = 0;

    cout << "ENTER A POSITIVE NATURAL NUMBER : ";
    cin >> N;

    for(int i = 0; i <= N; i++)
    {
        sum += i;
    }

    cout << "THE SUM OF FIRST " << N << " NUMBER IS : " << sum << endl;

    return 0;
}