/*
    First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

        *
       * *
      * * *
     * * * *
    * * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the number : ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        k = 0;
        for (int col = 1; col <= (2 * n - 1); col++)
        {
            if (col >= n - row + 1 && col <= n + row - 1)
            {
                if (k == 0)
                {
                    cout <<"*";
                    k = 1;
                }
                else
                {
                    cout <<" ";
                    if (k == 1)
                        k = 0;
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,k;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         k=0;
//         for(int col=1;col<=(2*n-1);col++)
//         {
//             if((col>=n-row+1 && col<=n+row-1) && k==0)
//             {
//                 cout<<"*";
//                 k=1;
//             }
//             else
//             {
//                 cout<<" ";
//                 if(k==1)
//                     k=0;
//             }
//         }
//         cout<<endl;
//     }
//    return 0;
// }
