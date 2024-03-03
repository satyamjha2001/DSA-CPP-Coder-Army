#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=6;row++)
    {
        for(char col='F';col<='K';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}