/*
Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    if ((0 < n) && (n%2==0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}