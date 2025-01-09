#include <iostream>
#include <vector>
using namespace std;

void segregate0and1(vector<int> &arr)
{
    // code here
    // Two pointer approach
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
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
    segregate0and1(arr);
    cout << "Segregated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }    
    return 0;
}