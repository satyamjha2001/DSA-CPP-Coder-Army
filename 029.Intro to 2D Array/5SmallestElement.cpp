#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, m, minElement = INT_MAX;
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

            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            minElement = min(minElement, a[i][j]);
        }
    }

    cout << "smallest element in matrix is " << minElement;
}