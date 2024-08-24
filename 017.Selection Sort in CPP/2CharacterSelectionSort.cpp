#include <iostream>
#include <vector>
using namespace std;
void inputArray(vector<char> &, int);
void selectionSort(vector<char> &, int);
void printArray(const vector<char> &, int);
int main()
{
    vector<char> arr;
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
void inputArray(vector<char> &arr, int size)
{
    char element;
    cout << "Enter the characters in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
}
void selectionSort(vector<char> &arr, int size)
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
void printArray(const vector<char> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}