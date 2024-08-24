// formula nCr = n!/((n-r)!*r!)


#include <iostream>
using namespace std;

int fact(int);
int nCr(int, int);

int main()
{
    int n, r;
    cout << "Enter value of n and r: ";
    cin >> n >> r;
    cout << "nCr="<<nCr(n,r);
    return 0;
}

int fact(int n)
{
    int f = 1;
    while(n>1)
    {
        f *= n;
        n--;
    }
    return f;
}
int nCr(int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}