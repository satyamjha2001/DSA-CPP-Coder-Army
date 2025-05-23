#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size n for nxn matrix: ";
    cin >> n;
    int a[n][n];
    cout << "Enter the elements of matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == n - i - 1)
            {
                sum += a[i][j];
            }
        }
    }
    cout << "Sum of its Diagonal elements is " << sum;
    return 0;
}