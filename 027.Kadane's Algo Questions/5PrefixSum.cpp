#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixSum(vector<int> &arr,int n)
{
    vector<int> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    return prefix;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> prefix=prefixSum(arr,n);
    cout<<"Prefix sum is: ";
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }
    return 0;
}