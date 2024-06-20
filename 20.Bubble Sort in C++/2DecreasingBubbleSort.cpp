#include <iostream>
#include <vector>
using namespace std;

class Sort
{
private:
    int size;
    vector<int> arr;

public:
    Sort();
    void inputArray();
    void decreasingBubbleSort();
    void printArray();
};
Sort::Sort()
{
    cout << "Enter the size of array: ";
    cin >> size;
    arr.resize(size); // defines arr of size elements
}
void Sort::inputArray()
{
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void Sort::decreasingBubbleSort()
{
    bool isSwap;
    for (int round = 0; round < size - 1; round++)
    {
        isSwap = false;
        for (int j = 0; j < size - round - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            break;
        }
    }
}
void Sort::printArray()
{
    cout << "Your Array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    Sort obj;
    obj.inputArray();
    obj.decreasingBubbleSort();
    obj.printArray();
}