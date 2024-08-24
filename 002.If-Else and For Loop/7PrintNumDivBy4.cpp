#include<iostream>
using namespace std;
void printDivisibleBy4(int);
int main()
{
    int n;
    cout<<"Enter the number to find numbers which is divisible by 4 : ";
    cin>>n;
    printDivisibleBy4(n);
    return 0;
}
void printDivisibleBy4(int n)
{
    if(n>3)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%4==0)
                cout<<i<<" ";
        }
    }
    else
        cout<<"Invalid Number";
}