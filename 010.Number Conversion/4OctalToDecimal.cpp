#include <iostream>
using namespace std;
int main()
{
    long long n,ans=0,rem;
    cout << "Enter your octal number : ";
    cin >> n;
    long long power=1;
    for (; n > 0;)
    {
        rem=n%10;
        ans+=rem*power;
        n=n/10;
        power*=8;
    }
    cout<<"Decimal equivalent is "<<ans;
    return 0;
}