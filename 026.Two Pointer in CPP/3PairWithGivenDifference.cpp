#include <bits/stdc++.h>
using namespace std;

bool findPair(vector<int> &arr, int x)
{
    // code here
    sort(arr.begin(), arr.end());
    int start = 0, end = 1;
    while (end < arr.size())
    {
        if (arr[end] - arr[start] == x)
            return 1;
        else if (arr[end] - arr[start] < x)
            end++;
        else
            start++;

        if (start == end)
            end++;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the sorted number of elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the difference: ";
    cin >> x;
    cout <<" Pair with given difference is " <<findPair(arr, x) << endl;
    return 0;
}