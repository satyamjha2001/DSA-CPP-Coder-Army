/*
    Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


             E
           E D
         E D C
       E D C B
     E D C B A
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    char ch;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {   ch='A'+n-1;
        for(int col=1;col<=n;col++)
        {
            if(col<=n-row)
            {
                cout<<"  ";
            }
            else
            {
                cout<<ch--<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}