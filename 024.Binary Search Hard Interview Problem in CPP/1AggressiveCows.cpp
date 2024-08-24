#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int solve(int n, int k, vector<int> &stalls)
    {

        sort(stalls.begin(), stalls.end());

        int start = 1, end = stalls[n - 1] - stalls[0];
        int pos, count, mid, ans;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            count = 1;
            pos = stalls[0];
            for (int i = 0; i < n; i++)
            {
                if (pos + mid <= stalls[i])
                {
                    count++;
                    pos = stalls[i];
                }
            }

            if (count < k)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cout << "Enter number of testcases: ";
    cin >> t;

    while (t--)
    {
        int n, k;
        cout << "Enter the size of array: ";
        cin >> n;
        cout << "Enter number of cows: ";
        cin >> k;

        vector<int> stalls(n);
        cout << "Enter the elements of array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }

        Solution obj;
        cout << endl
             << "Minimum distance between any two of them is the maximum possible is " << obj.solve(n, k, stalls) << endl;
    }

    return 0;
}