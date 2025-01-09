#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int i, j = 0;
    for (i = 1; i < n; i++)
    {
        if (nums[j] != nums[i])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
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

    int k = removeDuplicates(arr);
    cout<<"Array after removing duplicates: ";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
} 