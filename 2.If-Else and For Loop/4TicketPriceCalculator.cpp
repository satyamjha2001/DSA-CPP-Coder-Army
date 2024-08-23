#include <iostream>
using namespace std;
void ticketPriceCalulator(int);
int main()
{
    int n;
    cout<<"Enter age : ";
    cin>>n;
    ticketPriceCalulator(n);
    return 0;
}
void ticketPriceCalulator(int age)
{
    if(12<=age && age<=65)
        cout<<"No";
    else
        cout<<"Yes";
}