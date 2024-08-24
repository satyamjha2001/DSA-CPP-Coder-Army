#include <iostream>
using namespace std;
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return 0;
        while (n > 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else if (n % 3 == 0)
                n /= 3;
            else if (n % 5 == 0)
                n /= 5;
            else
                return 0;
        }
        return 1;
    }
};

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    Solution obj;
    if (obj.isUgly(n))
    {
        cout << n << " is ugly number.";
    }
    else
    {
        cout << n << " is not a ugly number.";
    }
    return 0;
}