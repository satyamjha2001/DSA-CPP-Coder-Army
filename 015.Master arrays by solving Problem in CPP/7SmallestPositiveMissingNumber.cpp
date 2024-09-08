#include <iostream>
#include <algorithm>
using namespace std;

int missingNumber(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    int missing = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == missing)
        {
            missing++;
        }
    }
    return missing;
}

// Driver Code
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Smallest positive number missing = " << missingNumber(arr, n);
    return 0;
}
