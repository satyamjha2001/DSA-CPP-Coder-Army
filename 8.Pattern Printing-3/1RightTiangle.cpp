/*
    
First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=n;col>=1;col--)
        {
            if(col>=1+row)
            {
                cout<<"   ";
            }
            else
            {
                cout<<setw(2)<<col<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
