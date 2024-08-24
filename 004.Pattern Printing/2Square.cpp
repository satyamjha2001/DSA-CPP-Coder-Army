/*
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25


*/

#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=6;row++)
    {
        for(int col=1;col<=5;col++)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
    return 0;
}