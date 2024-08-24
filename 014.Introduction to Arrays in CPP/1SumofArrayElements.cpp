/*
    Take 20 elements from user input and find its sum with the help of an array
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[20], sum = 0;
    cout << "Enter 20 numbers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of 20 numbers is " << sum;

    return 0;
}