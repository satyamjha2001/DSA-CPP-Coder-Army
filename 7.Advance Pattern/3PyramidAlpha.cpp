/*
 Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


              A
            A B A
          A B C B A
        A B C D C B A
      A B C D E D C B A


*/
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    char ch;
    cout << "Enter the number : ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        ch = 'A';
        k = 0;
        for (int col = 1; col <= (2 * n - 1); col++)
        {
            if (col >= n - row + 1 && col <= n + row - 1)
            {
                if (col <= n)
                {
                    cout << ch<<" ";
                    ch++;
                }
                else
                {
                    if (k == 0)
                    {
                        ch--;
                        k = 1;
                    }
                    ch--;
                    cout << ch<<" ";
                }
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
