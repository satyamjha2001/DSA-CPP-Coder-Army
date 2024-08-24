/*
Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
*/

#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    cout << "Capital Letters: " << endl;
    while (c <= 'Z')
    {
        cout << c << " ";
        c++;
    }
    c = 'a';
    cout << endl << "Small Letters: " << endl;

    while (c <= 'z')
    {
        cout << c << " ";
        c++;
    }

    return 0;
}