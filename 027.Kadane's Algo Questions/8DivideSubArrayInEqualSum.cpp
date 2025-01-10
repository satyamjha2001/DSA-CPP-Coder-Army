#include <iostream>
#include <vector>
using namespace std;

bool DividesubArrayInEqualSum(vector<int> &arr, int n)
{
    int totalSum = 0;
    for (int i = 0; i < n;i++)
    {
        totalSum += arr[i];
    }
    int prefix = 0;
    for (int i = 0; i < n;i++)
    {
        prefix+=arr[i];
        int suffix = totalSum - prefix;
        if (prefix == suffix)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(DividesubArrayInEqualSum(arr, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}