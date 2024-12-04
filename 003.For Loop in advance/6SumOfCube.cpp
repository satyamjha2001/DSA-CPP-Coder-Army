#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    /*for(int i=1;i<=n;i++)
    {
        sum+=i*i*i;
    }
    cout<<"Sum of cubes until n is "<<sum;
    */
    // OR

    sum = (n * n * (n + 1) * (n + 1)) / 4;
    cout << "Sum of cubes until n is " << sum;
    return 0;
}