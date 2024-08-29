#include<iostream>
using namespace std;

int min(int, int[]);
int max(int, int[]);

int main()
{
    int arr[100],size;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter your array:";
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum number is " << min(size, arr)<<endl;
    cout << "Maximum number is " << max(size, arr);

    return 0;
}

int min(int size, int arr[])
{
    int min=arr[0];
    for (int i = 0; i < size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    return min;
}

int max(int size, int arr[])
{
    int max=arr[0];
    for (int i = 0; i < size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    return max;
}