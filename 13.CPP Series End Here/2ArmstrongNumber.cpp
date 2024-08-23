#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int);

int main()
{
    int n;
    cout << "************Armstrong Number Checker************"<<endl;
    cout << "Enter a number :";
    cin >> n;
    if (isArmstrong(n))
    {
        cout << n << " is armstrong number.";
    }
    else
    {
        cout << n << " is not armstrong number.";
    }
    return 0;
}

bool isArmstrong(int n)
{
    int rem, ans = 0;
    int digit = log10(n) + 1;
    int temp = n;
    while(temp>0)
    {
        rem = temp % 10;
        // cout << "Current digit: " << rem << endl; // Debug output
        temp /= 10;
        ans += pow(rem, digit);
        // cout << "Current ans: " << ans << endl; // Debug output
    }
    if(ans==n)
        return true;
    return false;
}