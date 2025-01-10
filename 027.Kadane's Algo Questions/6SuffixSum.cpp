#include <iostream>
#include <vector>
using namespace std;

vector<int> suffixSum(vector<int> &arr, int n)
{
    vector<int> suffix(n);
    suffix[n-1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    return suffix;
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
    vector<int> suffix = suffixSum(arr, n);
    cout << "Suffix sum is: ";
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }
    return 0;
}