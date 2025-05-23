#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, m, maxElement = INT_MIN;
    cout << "Enter the no. of rows and columns: ";
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    cout << "Enter the elements of matrix " << n << "x" << m << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> a[i][j];
        }
    }

    cout << "Your matrix is :" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << a[i][j]<<" ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maxElement = max(maxElement, a[i][j]);
        }
    }

    cout << "Largest element in matrix is " << maxElement;
}