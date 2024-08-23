
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