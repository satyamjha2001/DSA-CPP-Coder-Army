#include<iostream>
using namespace std;
int countZeroes(int arr[], int n)
{
    int start = 0, end = n - 1;
    while(start<=end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid]==0)
        {
            if(mid==0 || arr[mid-1]==1)
            {
                return n - mid;
            }
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}
int main()
{
    int arr[100], n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter array elements only 1's followed by 0's like that '111000' ";
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    cout << countZeroes(arr, n);

    return 0;
}