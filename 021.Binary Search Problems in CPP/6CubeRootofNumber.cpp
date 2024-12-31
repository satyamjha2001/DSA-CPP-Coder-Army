#include <iostream>
using namespace std;
int floorCubeRoot(int);
int main()
{
    int x;
    cout << "Enter the number : ";
    cin >> x;
    if (x < 0)
    {
        cout << "Give positive number";
    }
    else
    {
        cout << "Cube root of number in floor integer is " << floorCubeRoot(x);
    }
    return 0;
}

int floorCubeRoot(int x)
{

    if (x == 0 || x == 1)
    {
        return x;
    }
    int start = 0, end = x, mid, ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == x / (mid * mid))
        {
            return mid;
        }
        else if (mid < x / (mid * mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}