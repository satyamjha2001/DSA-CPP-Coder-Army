#include <iostream>
using namespace std;
long long OctalToDecimal(int n)
{   long long ans=0,rem;
    long long power=1;
    for (; n > 0;)
    {
        rem=n%10;
        ans+=rem*power;
        n=n/10;
        power*=8;
    }
    return ans;
}
long long DecimalToBinary(int n)
{
    long long ans=0,rem;
    long long power=1;
    for (; n > 0;)
    {
        rem=n%2;
        ans+=rem*power;
        n=n/2;
        power*=10;
    }
    return ans;
}
long long OctalToBinary(int n)
{
    long long a = OctalToDecimal(n);
    long long b = DecimalToBinary(a);
    return b;
}
int main()
{
    long long n;
    cout << "Enter your octal number : ";
    cin >> n;
    cout<<"Binary equivalent is "<<OctalToBinary(n);
    return 0;
}