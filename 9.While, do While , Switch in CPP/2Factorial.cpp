/*
Find the factorial of a number n using a while loop and do a while loop.
*/

#include <iostream>
using namespace std;
long long doWhileLoop(int);
long long whileLoop(int);

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid Input. Enter positive no.";
        return 0;
    }

    cout << n << "!=" << whileLoop(n);
    cout << endl;
    cout << n << "!=" << doWhileLoop(n);
    return 0;
}

long long doWhileLoop(int n)
{
    long long ans = 1;
    if (n == 0)
        return ans;
    do
    {
        ans = ans * n;
        n--;
    } while (n > 1);

    return ans;
}

long long whileLoop(int n)
{
    long long ans = 1;
    while (n > 1)
    {
        ans = ans * n;
        n--;
    }

    return ans;
}