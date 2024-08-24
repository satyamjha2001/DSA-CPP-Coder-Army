/*
 Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
*/

#include<iostream>
using namespace std;

void notDivBy3and5(int);

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    //not divisible by 3 or 5.
    if(n<1)
    {
        cout << "Enter number greater than 0.";
        return 0;
    }
    notDivBy3and5(n);

    return 0;
}

void notDivBy3and5(int n)
{
    int i = 1;
    while(i<=n)
    {
        if(i%3==0 || i%5==0)
        {
            i++;
            continue;
        }
        cout << i<<" ";
        i++;
    }
}