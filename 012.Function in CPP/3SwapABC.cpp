/*There are three numbers a, b, c.Put the value of a into b, put value of b into c and put value of c into a.Do it using Function.*/

#include <iostream>
using namespace std;

void swapABC(int &, int &, int &);

int main()
{
    int a, b, c;
    cout << "Enter value of A, B and C: ";
    cin >> a >> b >> c;
    cout << "Before Swap \n A=" << a << " B=" << b << " C=" << c<<endl;
    swapABC(a, b, c);
    cout << "After Swap \n A=" << a << " B=" << b << " C=" << c<<endl;

    return 0;
}

void swapABC(int &a, int &b, int &c)
{
    int temp = c;
    c = b;
    b = a;
    a = temp;
}