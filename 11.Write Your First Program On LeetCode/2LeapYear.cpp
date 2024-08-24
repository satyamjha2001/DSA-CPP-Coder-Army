
#include <iostream>
using namespace std;

class Solution
{
public:
    int isLeap(int N)
    {
        if ((N % 4 == 0 && N % 100 != 0) || N % 400 == 0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int year;
    cout << "Enter your year: ";
    cin >> year;

    Solution obj;
    if (obj.isLeap(year))
    {
        cout << year << " is Leap Year";
    }
    else
    {
        cout << year << " is not Leap Year";
    }
    return 0;
}