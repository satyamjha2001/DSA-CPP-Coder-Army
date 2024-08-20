#include<iostream>
using namespace std;

class Solution
{
public:
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m)
    {
        // code here
        if (m > n)
            return -1;

        int start = 0, end = 0, pages, count, ans;
        for (int i = 0; i < n; i++)
        {
            start = max(start, arr[i]);
            end += arr[i];
        }

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            pages = 0;
            count = 1;
            for (int i = 0; i < n; i++)
            {
                pages += arr[i];
                if (pages > mid)
                {
                    count++;
                    pages = arr[i];
                }
            }

            if (count <= m)
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
    int n, a[100], m;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the number of elements in an array: ";
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number of students: ";
    cin >> m;

    Solution s;
    if (s.findPages(n,a, m)==-1){
        cout << "Invalid inputs!";
    }
    else
    {
        cout <<"Minimum number of pages in book allocations is "<< s.findPages(n, a, m);
    }
        return 0;
}