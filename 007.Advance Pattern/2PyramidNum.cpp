/*
    Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
            1
          1 2 3
        1 2 3 4 5
      1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8 9

*/
#include <iostream>
using namespace std;
int main()
{
    int n,num;
    cout << "Enter the number : ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        num=1;
        for (int col = 1; col <= (2 * n - 1); col++)
        {
            if (col >= n - row + 1 && col <= n + row - 1)
            {
                cout<<num<<" ";
                num++;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}
