/*
    Find the second largest element in an array of unique elements of size n. Where n>3.
*/

#include <iostream>
#include <climits>
using namespace std;
void secondLargest(int n, int arr[])
{
    int max = arr[0], secondMax = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    if (secondMax == INT_MIN)
    {
        cout << "There is no second largest number.";
    }
    else
    {
        cout << "Second Largest Element is " << secondMax;
    }
}

int main()
{
    int arr[100], n;
    cout << "Enter the size of array(>3): ";
    cin >> n;
    cout << "Enter unique elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    secondLargest(n, arr);
    return 0;
}