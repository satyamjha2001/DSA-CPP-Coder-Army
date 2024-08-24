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
        rem=n%2;
        ans+=rem*power;
        n=n/2;
        power*=10;
    }
    cout<<"Binary equivalent is "<<ans;
    return 0;
}