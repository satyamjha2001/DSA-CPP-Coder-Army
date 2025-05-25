#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter no of rows and columns of matrix: ";
    cin >> rows >> columns;
    int a[rows][columns], b[rows][columns];

    cout << "Enter the elements of matrix A:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Matrix A+B is :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}