// #include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
//brute force O(n^2)
int specialArray(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i <= nums[j])
            {
                count++;
            }
        }
        if (i == count)
            return i;
    }
    return -1;
}

// sort +normal loop + binary Search O(nlogn)
int specialArray(vector<int> &nums)
{
    int n = nums.size();
    // sort the array
    sort(nums.begin(), nums.end());

    for (int x = 0; x <= n; x++)
    { // now we implement binary search and find first >= element index
        int index = n, count = 0;
        int start = 0, end = n - 1, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] >= x)
            {
                index = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        count = n - index;
        if (x == count)
            return x;
    }
    return -1;
}

//sort + binary search + binary search
int lowerBound(vector<int> &nums, int x)
{
    int n = nums.size();
    int index = n;
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] >= x)
        {
            index = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return index;
}
int specialArray(vector<int> &nums)
{
    int n = nums.size();
    // sort the array
    sort(nums.begin(), nums.end());
    int start = 0, end = n, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // now we implement binary search and find first >= element index
        int index = lowerBound(nums, mid);
        int count = n - index;
        if (mid == count)
            return mid;
        else if (mid < count)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

//most optimized prefix sum or cumulative sum
int specialArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> freq(n + 1); // because 0 to n, n+1
    for (int i = 0; i < n; i++)
    {
        freq[min(n, nums[i])]++;
    }
    int c_sum = 0;
    for (int i = n; i > 0; i--)
    {
        c_sum += freq[i];
        if (c_sum == i)
            return i;
    }
    return -1;
}
int main()
{
    vector<int> nums;
    specialArray(nums);
    return 0;
}