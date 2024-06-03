#include <iostream>
#include <vector>
using namespace std;
void inputArray(vector<int> &, int);
void bubbleSort(vector<int> &, int);
void printArray(const vector<int> &, int);
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter the size of array";
    cin >> size;
    inputArray(arr, size);
    bubbleSort(arr, size);
    cout << "Your sorted Array: ";
    printArray(arr, size);
    return 0;
}
void inputArray(vector<int> &arr, int size)
{
    cout << "Enter the elements of array";
    int element;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
}
void bubbleSort(vector<int> &arr, int size)
{
    for (int round = 0; round < size - 1; round++)
    {
        bool swapped = false;
        for (int j = 0; j < size - round - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
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