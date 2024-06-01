#include<iostream>
using namespace std;
class Solution
{
    public:
        int solve(int, int);
};
int Solution::solve(int A, int B) {
    int count=0;
    count+=min(A-1,B-1);
    count+=min(A-1,8-B);
    count+=min(8-A,B-1);
    count+=min(8-A,8-B);
    return count;
}
int main()
{
    int a, b;
    cout << "Enter the current row and column of bishop :";
    cin >> a >> b;
    Solution ob;
    cout<<"Total number of moves : "<<ob.solve(a, b);
    return 0;
}