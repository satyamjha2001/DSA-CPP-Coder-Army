#include <iostream>
#include <vector>
using namespace std;
void inputArray(vector<int> &, int);
void binarySearch(vector<int> &, int);
void printArray(const vector<int> &);
int main()
{
    int size;
    vector<int> arr;
    int item;
    cout << "Enter the size: ";
    cin >> size;
    inputArray(arr, size);
    cout << "Enter item to search:";
    cin >> item;
    binarySearch(arr, item);
    return 0;
}

void inputArray(vector<int> &arr, int size)
{
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

}

void binarySearch(vector<int> &arr, int item)
{
    int size = arr.size();
    int start = 0, end = size - 1;
    int mid;

    while(start<=end)
    {
        mid = start + (end - start) / 2;
        if(item== arr[mid])
        {
            cout << "Element found at " << mid + 1;
            return;
        }
        else if(item<arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "Element not found";
}