// User function template for C++
class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        // code here
        int left, right, mid, first, last;
        left = 0, right = n - 1, first = last = -1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid] == x)
            {
                first = mid;
                right = mid - 1;
            }
            else if (arr[mid] > x)
                right = mid - 1;
            else
                left = mid + 1;
        }
        if (first == -1)
            return 0;
        left = 0, right = n - 1; // re-assigning left and right values
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid] == x)
            {
                last = mid;
                left = mid + 1;
            }
            else if (arr[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return last - first + 1;
    }
};