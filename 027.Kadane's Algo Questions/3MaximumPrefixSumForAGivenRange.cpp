#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> maxPrefixes(vector<int> &arr, vector<int> &leftIndex,
                        vector<int> &rightIndex)
{
    // code here.
    int n = leftIndex.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int prefix = 0;
        int maxi = INT_MIN;
        for (int j = leftIndex[i]; j <= rightIndex[i]; j++)
        {
            prefix += arr[j];
            maxi = max(prefix, maxi);
        }
        ans[i] = maxi;
    }
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

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    vector<int> leftIndex(q);
    vector<int> rightIndex(q);
    for (int i = 0; i < q; i++)
    {
        cout << "Enter the left index: ";
        cin >> leftIndex[i];
        cout << "Enter the right index: ";
        cin >> rightIndex[i];
    }

    vector<int> ans = maxPrefixes(arr, leftIndex, rightIndex);
    for (int i = 0; i < q; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}