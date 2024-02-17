#include <iostream>
using namespace std;
void print()
{
    int age;
    cout<<"Enter your age ";
    cin>>age;
    if(age>18)
        cout<<"Adult";
    else
        cout<<"Teenager";
}
int main()
{
    print();
    return 0;
}