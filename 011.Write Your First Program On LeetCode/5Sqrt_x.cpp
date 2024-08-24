#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int n = 1, ans = 0;
        while (n <= x / n)
        {
            ans = n;
            n++;
        }
        return ans;
    }
};

int main()
{
    int x;
    cout << "Enter the number : ";
    cin >> x;
    Solution obj;
    if (x < 0)
    {
        cout << "Give positive number";
    }
    else
    {
        cout << "Square root of number in floor integer is " << obj.mySqrt(x);
    }
    return 0;
}