#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    vector<int> ans(2);
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (numbers[start] + numbers[end] == target)
        {
            ans[0] = start + 1;
            ans[1] = end + 1;
            return ans;
        }
        else if (numbers[start] + numbers[end] < target)
            start++;
        else
            end--;
    }
    return ans;
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
    int target;
    cout << "Enter the target: ";
    cin >> target;
    vector<int> ans = twoSum(arr, target);
    cout << "The indices are: " << ans[0] << " " << ans[1];
    return 0;
}