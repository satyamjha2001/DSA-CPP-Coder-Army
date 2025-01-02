#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int> &arr, int n)
{
    if(n==1)
        return arr[0];
    if(arr[0]>arr[1])
        return arr[0];
    if(arr[n-1]>arr[n-2])
        return arr[n - 1];

    int start = 1, end = n - 2, mid;
    while(start<=end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return arr[mid];
        else if(arr[mid]>arr[mid+1])
            end = mid - 1;
        else
            start = mid + 1;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout <<"Peak element is "<< findPeak(arr, n)<<endl;

    // cout << "array is ";
    // for(int val:arr)
    // {
    //     cout << val<<" ";
    // }
    return 0;
}