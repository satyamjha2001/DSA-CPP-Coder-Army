#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int n)
    {
        if (n < 0)
            return 0;
        int temp = n, ans = 0;
        while (temp > 0)
        {
            if (ans > INT_MAX / 10)
                return 0;
            ans = 10 * ans + (temp % 10);
            temp = temp / 10;
        }
        if (ans == n)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    Solution obj;
    if (obj.isPalindrome(n))
    {
        cout << n << " is palindrome number.";
    }
    else
    {
        cout << n << " is not a palindrome number.";
    }

    return 0;
}
