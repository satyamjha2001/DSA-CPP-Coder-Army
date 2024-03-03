#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=4;row++)
    {
        char ch='A';
        for(int col=1;col<=4;col++)
        {
            if(col<=4-row+1)
            {
                cout<<ch<<" ";
                ch++;
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