#include<iostream>
using namespace std;
void printMonth(int n)
{
    if(n<1 || n>12)
        cout<<"Invalid Number";
    else if(n==1)
        cout<<"January";
    else if(n==2)
        cout<<"February";
    else if(n==3)
        cout<<"March";
    else if(n==4)
        cout<<"April";
    else if(n==5)
        cout<<"May";
    else if(n==6)
        cout<<"June";
    else if(n==7)
        cout<<"July";
    else if(n==8)
        cout<<"August";
    else if(n==9)
        cout<<"September";
    else if(n==10)
        cout<<"October";
    else if(n==11)
        cout<<"November";
    else if(n==12)
        cout<<"December";
}
int main()
{
    int n;
    cout<<"Enter number between 1 to 12 ";
    cin>>n;
    printMonth(n);
}
