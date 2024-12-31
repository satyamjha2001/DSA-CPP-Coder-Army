#include <iostream>
using namespace std;
void numOfOcc(int arr[], int n, int item)
{
    int start = 0, end = n - 1,first=-1, last=-1;
    int mid;
    //for first occurrences
    while(start<=end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid]==item)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<item)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    //for last occurrences
    start = 0, end = n - 1;
    while(start<=end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid]==item)
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<item)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if(first==-1)
    {
        cout << "Total number of occurrences: " << 0;
    }
    else
    {
    cout<<"Total number of occurrences: "<< last - first + 1;
    }
} 
int main()
{
    int arr[100], n, item;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to find its occurrences in array : ";
    cin >> item;
    numOfOcc(arr, n, item);
    return 0;
}