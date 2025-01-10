#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int maximumDifference(vector<int> &nums)
// {
//     int minSoFar = nums[0];
//     int maxDiff = -1;

//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (nums[i] > minSoFar)
//         {
//             maxDiff = max(maxDiff, nums[i] - minSoFar);
//         }
//         else
//         {
//             minSoFar = nums[i];
//         }
//     }
//     return maxDiff;
// }

int maximumDifference(vector<int> &nums)
{
    int n = nums.size();
    int maxSoFar = INT_MIN;
    int maxDiff = -1;
    vector<int> suffixMax(n);
    for (int i = n - 1; i >= 0; i--)
    {
        maxSoFar = max(maxSoFar, nums[i]);
        suffixMax[i] = maxSoFar;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (suffixMax[i + 1] > nums[i])
            maxDiff = max((suffixMax[i + 1] - nums[i]), maxDiff);
    }
    return maxDiff;
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

    int ans = maximumDifference(arr);
    cout << "Maximum difference is: " << ans << endl;
    return 0;
}