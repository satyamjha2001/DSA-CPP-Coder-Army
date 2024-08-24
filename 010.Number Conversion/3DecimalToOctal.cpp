#include <iostream>
using namespace std;
int main()
{
    long long n,ans=0,rem;
    cout << "Enter your decimal number : ";
    cin >> n;
    long long power=1;
    for (; n > 0;)
    {
        rem=n%8;
        ans+=rem*power;
        n=n/8;
        power*=10;
    }
    cout<<"Octal equivalent is "<<ans;
    return 0;
}