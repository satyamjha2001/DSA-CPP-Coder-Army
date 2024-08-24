#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &, int);
int main()
{
    vector<int> arr;
    int size, target;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter elements in rotated sorted order: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    cout << "Enter element to search : ";
    cin >> target;

    int position = search(arr,target);
    if(position == -1)
        cout << "Element not present in array.";
    else
        cout << "Element present at " << position + 1 << " position.";
    return 0;
}

int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1, ans = -1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            break;
        }
        if (nums[mid] >= nums[0]) // to find if array is left side sorted
        {
            if (nums[start] <= target && target <= nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else // if array is right side sorted
        {
            if (nums[mid] <= target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return ans;
}