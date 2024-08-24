/*
    Find the third smallest element in an array of unique elements size n. Where n>3.
*/

#include <iostream>
#include <climits>
using namespace std;
void thirdSmallest(int n, int arr[])
{
    int min = INT_MAX, secondMin = INT_MAX, thirdMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            thirdMin = secondMin;
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] != min && arr[i] < secondMin)
        {
            thirdMin = secondMin;
            secondMin = arr[i];
        }

        else if (arr[i] != min && arr[i] != secondMin && arr[i] < thirdMin)
        {
            thirdMin = arr[i];
        }
    }
    if (thirdMin == INT_MAX)
    {
        cout << "There is no third smallest number.";
    }
    else
    {
        cout << "Third smallest Element is " << thirdMin;
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
    thirdSmallest(n, arr);
    return 0;
}