#include <iostream>
using namespace std;

int main()
{
    float celsius;
    float fahreneit;
    float kelvin;

    cout << "\n===CELSIUS TO FAHRENEIT===\n";
    cout << "\nCelsius : ";
    cin >> celsius;
    fahreneit = (celsius*9/5) + 32;
    cout << "\nCELSIUS TO FAHRENEIT IS : " << fahreneit << endl; 


    cout << "\n===CELSIUS TO KELVIN===\n";
    cout << "\nCelsius : ";
    cin >> celsius;
    kelvin = celsius + 273.15;
    cout << "\nCELSIUS TO KELVIN IS : " << kelvin << endl;


    cout << "\n===FAHRENEIT TO CELSIUS===\n";
    cout << "Fahreneit : ";
    cin >> fahreneit;
    celsius = (fahreneit - 32)*5/9;
    cout << "\nFAHRENEIT TO CELSIUS IS : " << celsius << endl;
}