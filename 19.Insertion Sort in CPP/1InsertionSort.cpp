#include <iostream>
#include <vector>
using namespace std;
void inputArray(vector<int> &, int);
void insertionSort(vector<int> &, int);
void printArray(const vector<int> &, int);
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter the size of array";
    cin >> size;
    inputArray(arr, size);
    insertionSort(arr, size);
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
void insertionSort(vector<int> &arr, int size)       // 1 2 3 4 5
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0;j--)
        {
            if(arr[j]<arr[j-1])
            {    
                swap(arr[j], arr[j - 1]);
            }
            else{
                break;
            }
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