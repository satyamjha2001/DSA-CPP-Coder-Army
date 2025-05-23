int getCount(vector<int> &arr, int num1, int num2)
{
    // Your code goes here.
    int n = arr.size();

    int left = -1, right = -1, count = 0;
    // Find the index of num1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num1)
        {
            left = i;
            break;
        }
    }

    // Find the index of num2
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == num2)
        {
            right = i;
            break;
        }
    }

    // If num1 or num2 is not found in the array
    if (left == -1 || right == -1)
    {
        return 0;
    }

    // Count the elements between num1 and num2
    if (left < right)
    {
        count = right - left - 1;
    }

    return count;
}