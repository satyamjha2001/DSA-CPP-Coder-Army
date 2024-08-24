/*
Give a number n, find if it is prime or not, use a while loop and break here to solve it.
*/

#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n))
    {
        cout << "Prime number.";
    }
    else
    {
        cout << "Non prime number.";
    }

    return 0;
}

bool isPrime(int n)
{
    bool flag=1;
    if(n<2)
        return 0;
    if(n==2 || n==3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    int i = 5;
    while(i<=n/i)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            flag = 0;
            break;
        }

        i += 6;
    }

    return flag;
}