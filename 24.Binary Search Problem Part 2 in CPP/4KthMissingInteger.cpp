#include <iostream>
#include <vector>
using namespace std;
int findKthPositive(vector<int> &, int);
int main()
{
    vector<int> arr;
    int size, k;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter elements in strictly increasing  order: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    cout << "Enter value of positive number(kth) : ";
    cin >> k;

    int value = findKthPositive(arr, k);
    cout << "kth positive missing integer is " << value;
    return 0;
}

int findKthPositive(vector<int> &arr, int k)
{
    int start = 0, end = arr.size() - 1;
    int mid, ans = arr.size();
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (k <= (arr[mid] - mid - 1))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans + k;
}