#include <iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>&);
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    cout << "Peak element in mountain array : " << endl<<peakIndexInMountainArray(arr);

    return 0;
}

int peakIndexInMountainArray(vector<int>& arr)
{
    int size = arr.size();
    int start = 0, end = size - 1,mid;

    while(start<=end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid-1]<=arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}