/*
    Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

             5
           5 4
         5 4 3
       5 4 3 2 
     5 4 3 2 1
*/


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {   k=n;
        for(int col=1;col<=n;col++)
        {
            if(col<=n-row)
            {
                cout<<"   ";
            }
            else
            {
                cout<<setw(2)<<k--<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
