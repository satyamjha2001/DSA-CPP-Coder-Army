/*
Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.
*/

#include <iostream>
using namespace std;

int main()
{
    int temperature;
    cout << "Enter the value of temperature in fahrenheit: ";
    cin >> temperature;
    if (70 < temperature && temperature < 90)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}