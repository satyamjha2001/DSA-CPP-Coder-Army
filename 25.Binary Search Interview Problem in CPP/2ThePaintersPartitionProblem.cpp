#include <iostream>
using namespace std;

class Solution
{
public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start = 0, end = 0, boards, count, ans;
        for (int i = 0; i < n; i++)
        {
            if (start < arr[i])
            {
                start = arr[i];
            }
            end += arr[i];
        }

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            boards = 0;
            count = 1;
            for (int i = 0; i < n; i++)
            {
                boards += arr[i];
                if (boards > mid)
                {
                    count++;
                    boards = arr[i];
                }
            }

            if (count <= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    int n, a[100], k;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the number of elements in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number of painters: ";
    cin >> k;

    Solution s;
    if (s.minTime(a, n, k) == -1)
    {
        cout << "Invalid inputs!";
    }
    else
    {
        cout << "Minimum number of time to paint boards is " << s.minTime(a, n, k);
    }
    return 0;
}