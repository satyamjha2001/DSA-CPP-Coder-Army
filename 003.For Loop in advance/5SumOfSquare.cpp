#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    cout << "Sum of squares until n is " << sum;

    // OR
    /*
    sum=(n*(n+1)*(2*n+1)/6)
     cout<<"Sum of squares until n is "<<sum;
    */
   return 0;
}