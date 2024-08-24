#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n < 1)
            return false;
        while (n != 1)
        {
            if (n % 2 == 1)
                return false;
            n = n / 2;
        }
        return true;
    }
};

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    Solution obj;

    if (obj.isPowerOfTwo(n))
    {
        cout << n << " is power of 2";
    }
    else
    {
        cout << n << " is not power of 2";
    }

    return 0;
}