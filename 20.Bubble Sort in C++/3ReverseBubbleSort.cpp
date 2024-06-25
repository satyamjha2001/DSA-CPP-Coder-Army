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
    void reverseBubbleSort();
    void printArray();
};
Sort::Sort()
{
    cout << "Enter the size of array: ";
    cin >> size;
}
void Sort::inputArray()
{
    int element;
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
}
void Sort::reverseBubbleSort()
{
    bool isSwap;
    for (int round = 0; round < size - 1; round++)
    {
        isSwap = false;
        for (int j = size - 1; j > round; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
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
    obj.reverseBubbleSort();
    obj.printArray();
    return 0;
}