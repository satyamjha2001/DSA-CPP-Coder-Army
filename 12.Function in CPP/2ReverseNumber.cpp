#include <iostream>
using namespace std;

int reverseNumber(int);

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << "Reverse of " << n << " is " << reverseNumber(n);
    return 0;
}

int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = 10 * rev + (n % 10);
        n /= 10;
    }

    return rev;
}