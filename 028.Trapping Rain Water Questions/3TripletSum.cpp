#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasTripletSum(vector<int> &arr, int target)
{
    // Your Code Here
    int n = arr.size();
    // O(n^3)
    //  for(int i=0;i<n-2;i++)
    //  {
    //      for(int j=i+1;j<n-1;j++)
    //      {
    //          for(int k=j+1;k<n;k++)
    //          {
    //              if((arr[i]+arr[j]+arr[k])==target)
    //              {
    //                  return true;
    //              }
    //          }
    //      }
    //  }
    //  return false;

    // O(n^2)
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        // like two pointer
        int start = i + 1;
        int end = n - 1;

        while (start < end)
        {
            int sum = arr[i] + arr[start] + arr[end];
            if (sum == target)
                return true;
            else if (sum < target)
                start++;
            else
                end--;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    if (hasTripletSum(arr, target))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}