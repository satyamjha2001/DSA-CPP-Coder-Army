#include <iostream>
#include <vector>
using namespace std;

int fibNum(int, vector<int>&);
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Fibonacci Number at position " << n << " is " << fibNum(n, arr);
    return 0;
}

int fibNum(int n, vector<int>& arr)
{
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n-1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n-1];
}