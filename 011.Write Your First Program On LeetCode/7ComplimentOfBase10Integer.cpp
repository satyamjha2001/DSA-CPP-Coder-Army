#include <iostream>
using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int ans = 0, rem, mul = 1;
        if (n == 0)
            return 1;
        while (n > 0)
        {
            rem = n % 2;
            rem = rem ^ 1;
            n = n / 2;
            ans += rem * mul;
            mul *= 2;
        }
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    Solution obj;
    if (n < 0)
    {
        cout << "Give positive number";
    }
    else
    {
        cout << "Bitwise complement of base 10 integer is " << obj.bitwiseComplement(n);
    }
    return 0;
}