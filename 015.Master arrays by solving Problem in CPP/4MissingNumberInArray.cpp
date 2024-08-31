/*
Given an array arr of size n−1 that contains distinct integers in the range of 1 to n (inclusive), find the missing element. The array is a permutation of size n with one element missing. Return the missing element.
*/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(int, vector<int>);
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n - 1);

    cout << "Enter the " << n - 1 << " elements from (1-n) : ";
    for (int i = 0; i < (n - 1); i++)
    {
        cin >> arr[i];
    }
    cout << "Missing number is " << missingNumber(n, arr);
    return 0;
}

int missingNumber(int n, vector<int> arr)
{

    // sum of n numbers
    int sum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        arraySum += arr[i];
    }

    return (sum - arraySum);
}