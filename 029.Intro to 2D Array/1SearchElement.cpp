#include <iostream>
using namespace std;

// void printcol(int arr[][4],int row, int col)
// {
//     for (int column = 0; column < col;column++)
//     {
//         for (int rows = 0; rows < row;rows++)
//         {
//             cout << arr[rows][column] <<" ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    // create 2D array

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Print all the value in array row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // print all the value in array col wise

    // printcol(arr, 3, 4);

    // Find an element in our array
    // Linear search
    int item = 13;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == item)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}