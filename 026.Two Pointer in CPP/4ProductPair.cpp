#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isProduct(vector<int> arr, long long x)
{
    // code here
    sort(arr.begin(), arr.end());

    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        long long product = (long long)arr[start] * arr[end];
        if (product == x)
            return 1;
        else if (product < x)
            start++;
        else
            end--;
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
    long long x;
    cout << "Enter the product: ";
    cin >> x;
    if (isProduct(arr, x))
        cout << "Pair with given product is present" << endl;
    else
        cout << "Pair with given product is not present" << endl;
    return 0;
}