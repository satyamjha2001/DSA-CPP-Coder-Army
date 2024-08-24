/*
    Calculate the average of elements in an array of size 18.
*/

#include <iostream>
using namespace std;

int main()
{
    double arr[18], sum = 0;
    int n;
    cout << "Enter the size of array from (1-18) :";
    cin >> n;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }


    cout << "average of "<<n<<" numbers is " << sum/n;

    return 0;
}