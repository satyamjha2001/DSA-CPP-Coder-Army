/*
    Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it.
*/

#include <iostream>
using namespace std;

int main()
{
    double arr[100];
    int n, item, k = 0;
    cout << "Enter the size of array :";
    cin >> n;
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> item;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            k = 1;
            cout << item << " found at index " << i;
            break;
        }
    }
    if (k == 0)
    {
        cout << item << " not present";
    }

    return 0;
}