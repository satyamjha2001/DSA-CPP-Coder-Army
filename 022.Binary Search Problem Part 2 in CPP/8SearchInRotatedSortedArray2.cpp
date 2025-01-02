#include <iostream>
#include <vector>
using namespace std;
bool search(vector<int> &, int);
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

    int position = search(arr, target);
    if (!position)
        cout << "Element not present in array.";
    else
        cout << "Element present in array";
    return 0;
}

bool search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check if the target is found
        if (nums[mid] == target)
            return true;

        // Handle duplicates: shrink the range
        if (nums[start] == nums[mid] && nums[mid] == nums[end])
        {
            start++;
            end--;
        }
        // If the left side is sorted
        else if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // If the right side is sorted
        else
        {
            if (nums[mid] < target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return false; // Target not found
}