#include<iostream>
using namespace std;
void printOdd(int);
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    printOdd(n);
    return 0;
}
void printOdd(int n)
{
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                cout<<i<<" ";
        }
    }
    else
        cout<<"Invalid Number";
}