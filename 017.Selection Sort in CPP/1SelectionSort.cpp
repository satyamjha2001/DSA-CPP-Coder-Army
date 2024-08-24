#include <iostream>
#include <vector>
using namespace std;
void inputArray(vector<int> &, int);
void selectionSort(vector<int> &, int);
void printArray(const vector<int> &, int);
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    inputArray(arr, size);
    cout << "Your original array: ";
    printArray(arr, size);
    selectionSort(arr, size);
    cout << "Your sorted array: ";
    printArray(arr, size);
    return 0;
}
void inputArray(vector<int> &arr, int size)
{
    int element;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
}
void selectionSort(vector<int> &arr, int size)
{
    for (int round = 0; round < size - 1; round++)
    {
        int minIndex = round;
        for (int j = round + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != round)
        {
            swap(arr[round], arr[minIndex]);
        }
    }
}
void printArray(const vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}