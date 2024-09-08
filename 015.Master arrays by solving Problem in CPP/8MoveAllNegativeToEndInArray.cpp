void segregateElements(vector<int> &arr)
{
    // Your code goes here
    int n = arr.size();
    vector<int> a(n);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            a[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}