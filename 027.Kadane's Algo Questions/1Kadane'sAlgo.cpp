#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    // code here...
    int maximumSubArray = INT_MIN;
    int prefix = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefix += arr[i];
        maximumSubArray = max(maximumSubArray, prefix);
        if (prefix < 0)
            prefix = 0;
    }
    return maximumSubArray;
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
    int ans = maxSubarraySum(arr);
    cout << "Maximum subarray sum is: " << ans << endl;
    return 0;
}