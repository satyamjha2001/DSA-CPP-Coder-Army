#include <iostream>
using namespace std;
void reverseArray(int, int[]);
int main()
{
    int arr[100], size;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArray(size, arr);
    cout << "Reverse Array :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void reverseArray(int size, int arr[])
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}