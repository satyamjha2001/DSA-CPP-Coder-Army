#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int> &);
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter elements in sorted order/rotated sorted order: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    cout << "Minimum in rotated sorted array : " << endl
         << findMin(arr);

    return 0;
}

int findMin(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1, ans = nums[0];
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = nums[mid];
            end = mid - 1;
        }
    }
    return ans;
}