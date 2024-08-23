/*
    
    10
    10 11
    10 11 12
    10 11 12 13
    10 11 12 13 14
    10 11 12 13 14 15

 */

#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=6;row++)
    {
        int k=10;
        for(int col=1;col<=6;col++)
        {
            if(col<=row)
            {
                cout<<k++<<" ";
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