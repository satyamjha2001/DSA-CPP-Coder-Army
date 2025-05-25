#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m, colSum;
    cout << "Enter the no. of rows and columns of matrix: ";
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

    // finding sum of each column
    for (int col = 0; col < m; col++)
    {
        colSum = 0;
        for (int row = 0; row < n; row++)
        {
            colSum += arr[row][col];
        }

        cout << "Sum of Column " << col << " is " << colSum << endl;
    }
    return 0;
}