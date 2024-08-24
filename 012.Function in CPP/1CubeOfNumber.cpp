#include<iostream>
using namespace std;

int cube(int);

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << "Cube of " << n << " is " << cube(n);
    return 0;
}

int cube(int n){
    return n * n * n;
}