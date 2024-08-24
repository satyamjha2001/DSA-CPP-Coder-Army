#include <iostream>
using namespace std;
class Solution
{
public:
    long long squaresInChessBoard(long long N)
    {
        // code here
        long long ans = 1;
        if (N < 1)
            return 0;
        if (N == 1)
            return ans;
        while (N > 1)
        {
            ans += N * N;
            N--;
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

    cout << "Squares In " << n << "x" << n << " chess board is " << obj.squaresInChessBoard(n);

    return 0;
}