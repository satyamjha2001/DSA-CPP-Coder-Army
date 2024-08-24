//Leetcode

#include<iostream>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        if (num == 0)
            return 0;
        return 1 + ((num - 1) % 9);
    }
};

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    Solution obj;
    cout<<"Addition of digits are "<<obj.addDigits(num);
    return 0;
}
