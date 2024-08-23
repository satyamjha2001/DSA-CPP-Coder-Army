/*
    
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
    1 2 3 4 5 6

*/

#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=7;row++)
    {
        for(int col=1;col<=6;col++)
        {
            if(col<=row)
            {
                cout<<col<<" ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}