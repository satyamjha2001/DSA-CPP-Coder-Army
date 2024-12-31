#include <iostream>
using namespace std;
int searchInsertPosition(int arr[], int, int);
int main()
{
    int arr[20], size, item;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element which have to find position: ";
    cin >> item;
    cout<<"Element should be at "<<searchInsertPosition(arr, size, item);

    return 0;
}

int searchInsertPosition(int arr[], int size, int item) 
{
    int start = 0, end = size - 1,mid,ans=size;

    while(start<=end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid]==item)
        {
            return mid;     //have to return index of element if found
        }
        else if(arr[mid]<item)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans+1;
}