#include <iostream>
using namespace std;
long long BinaryToDecimal(int n)
{   long long ans=0,rem;
    long long power=1;
    for (; n > 0;)
    {
        rem=n%10;
        ans+=rem*power;
        n=n/10;
        power*=2;
    }
    return ans;
}
long long DecimalToOctal(int n)
{
    long long ans=0,rem;
    long long power=1;
    for (; n > 0;)
    {
        rem=n%8;
        ans+=rem*power;
        n=n/8;
        power*=10;
    }
    return ans;
}
long long BinaryToOctal(int n)
{
    long long a = BinaryToDecimal(n);
    long long b = DecimalToOctal(a);
    return b;
}
int main()
{
    long long n;
    cout << "Enter your binary number : ";
    cin >> n;
    cout<<"Octal equivalent is "<<BinaryToOctal(n);
    return 0;
}