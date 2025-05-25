#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the no. of rows and columns of matrix: " << endl;
    cin >> n >> m;
    int arr[100][100];

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

    // Reversing Each Row

    for (int row = 0; row < n; row++)
    {
        int start = 0, end = m - 1;
        while (start < end)
        {
            swap(arr[row][start], arr[row][end]);
            start++;
            end--;
        }
    }

    // printing Matrix
    cout << "Matrix after each row reversed" << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}