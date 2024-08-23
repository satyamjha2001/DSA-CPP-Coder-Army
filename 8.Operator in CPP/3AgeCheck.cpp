/*
 Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).
*/

#include <iostream>
using namespace std;
void print()
{
    int age;
    cout << "Enter your age ";
    cin >> age;
    if (age > 19)
        cout << "Adult";
    else
        cout << "Teenager";
}
int main()
{
    print();
    return 0;
}