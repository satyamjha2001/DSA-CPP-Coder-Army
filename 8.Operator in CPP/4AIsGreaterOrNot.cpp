/*
Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
*/

#include <iostream>
using namespace std;
bool aIsGreater(int a, int b, int c)
{
    if (a > b || a > c)
        return true;
    return false;
}
int main()
{
    int a, b, c;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;
    if (aIsGreater(a, b, c))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}