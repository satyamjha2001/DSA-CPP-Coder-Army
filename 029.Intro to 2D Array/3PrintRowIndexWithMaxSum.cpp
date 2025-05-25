#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m, rowSum = 0, maxSum = INT_MIN, rowIndex = -1;
    cout << "Enter the no. of rows and columns of matrix: ";
    cin >> n >> m;
    int arr[m][n];

    cout << "Enter the matrix elements: " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin >> arr[row][col];
        }
    }

    // printing Matrix
    cout << "Your Matrix is " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // finding row index
    for (int row = 0; row < n; row++)
    {
        rowSum = 0;
        for (int col = 0; col < m; col++)
        {
            rowSum += arr[row][col];
        }

        if (maxSum < rowSum)
        {
            maxSum = rowSum;
            rowIndex = row;
        }
    }

    cout << "Row index with maximum sum is " << rowIndex;
    return 0;
}