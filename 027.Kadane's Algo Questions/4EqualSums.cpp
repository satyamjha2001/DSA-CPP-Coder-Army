#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> equalSums(vector<int>& arr)
{
    vector<int> ans(3);
    int totalSum=0, prefix=0, suffix=0, subArray,diff=0, minDiff=INT_MAX, index=-1;
    // for(int num:arr)
    // {
    //     totalSum += num;
    // }
    totalSum = accumulate(arr.begin(), arr.end(), 0);
    for (int i = 0; i < arr.size();i++)
    {
        prefix += arr[i];
        suffix = totalSum - prefix;
        diff = abs(suffix - prefix);
        if(diff<minDiff)
        {
            minDiff = diff;
            index = i + 1; // 1 based indexing
            if(prefix<suffix)
                subArray = 1;
            else
                subArray = 2;
        }
    }
    ans[0] = minDiff;
    ans[1] = index+1;
    ans[2] = subArray;
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the number of elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(equalSums(arr));
    cout << "Minimum Element : " << ans[0] << endl;
    cout << "Position of Element : " << ans[1] << endl;
    cout << "Element inserted at subArray : " << ans[2] << endl;
    return 0;
}