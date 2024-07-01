#include <iostream>
using namespace std;
int* firstLastPosition(int arr[], int,int);
int main()
{
    int arr[20], size,item;
    cout << "Enter the size : ";
    cin >> size;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element which have to find position: ";
    cin >> item;
    int *ans = firstLastPosition(arr, size, item);
    if(ans[0]==-1)
    {
        cout << "Element not found";
    }
    else if(ans[0]==ans[1])
    {
        cout << "Element is only present at " << ans[0];
    }
    else
    {
        cout << "First Position of element is " << ans[0]+1<<endl;
        cout << "Last Position of element is " << ans[1]+1;
    }
    return 0;
}

int* firstLastPosition(int arr[], int size, int item)
{
    int start = 0, end = size - 1, mid;
    int *ans = new int[2];
    ans[0] = -1;
    ans[1] = -1;
    //for left part
    while(start<=end)
    {
        mid = start + (end - start) / 2;

        if(arr[mid]==item)
        {
            ans[0] = mid;
            end = mid - 1;
        }
        else if(arr[mid]<item)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    //for right part
    start = 0, end = size - 1;
    while(start<=end)
    {
        mid = start + (end - start) / 2;

        if(arr[mid]==item)
        {
            ans[1] = mid;
            start = mid + 1;
        }
        else if(arr[mid]<item)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}