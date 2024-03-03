/*
    Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
            B B
          C C C
        D D D D
      E E E E E
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col<=n-row)
            {
                cout<<"  ";
            }
            else
            {
                cout<<char('A'+row-1)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
