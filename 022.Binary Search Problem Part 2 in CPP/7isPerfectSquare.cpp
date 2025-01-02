bool isPerfectSquare(int num)
{
    if (num < 2)
        return true;
    int start = 2, end = num;
    double mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == num / mid)
            return true;
        else if (mid < num / mid)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}