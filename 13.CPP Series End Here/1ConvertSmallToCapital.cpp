#include <iostream>
using namespace std;
char smallToCapital(char);
int main()
{
    char alpha;
    cout << "Enter small character from a-z : ";
    cin >> alpha;
    if ('a' <= alpha <= 'z')
    {
        cout << smallToCapital(alpha);
        return 0;
    }
    cout << "Enter valid character.";
    return 0;
}
char smallToCapital(char alpha)
{
    return (alpha - 'a' + 'A');
}