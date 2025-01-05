#include <iostream>
using namespace std;

int splitArray(int arr[], int N, int K)
{
    // code here
    if (K > N)
        return -1;
    int start = 0, end = 0, count, ans, num;
    for (int i = 0; i < N; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        count = 1;
        num = 0;
        for (int i = 0; i < N; i++)
        {
            num += arr[i];
            if (num > mid)
            {
                count++;
                num = arr[i];
            }
        }

        if (count <= K)
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
    cout << "Enter the number of partitions: ";
    cin >> k;
    cout <<"Largest sum: "<<splitArray(a, n, k) << endl;
    return 0;
}