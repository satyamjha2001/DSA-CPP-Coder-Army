/*
Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
*/
#include <iostream>
using namespace std;
void doWhileLoop(int);
void whileLoop(int);

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    whileLoop(n);
    cout << endl;
    doWhileLoop(n);
    return 0;
}

void doWhileLoop(int n)
{
    int i = 1;
    do
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    } while (i <= n);
}

void whileLoop(int n)
{
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    }
}