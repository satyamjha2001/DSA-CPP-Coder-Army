#include <iostream>
using namespace std;

void swapABC(int &, int &);

int main()
{
    int a, b, c;
    cout << "Enter value of A and B: ";
    cin >> a >> b;
    cout << "Before Swap \n A=" << a << " B=" << b<< endl;
    swapABC(a, b);
    cout << "After Swap \n A=" << a << " B=" << b<< endl;

    return 0;
}

void swapABC(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}