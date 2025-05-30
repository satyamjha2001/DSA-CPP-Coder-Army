#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    // here we have to find max area
    int maxArea = 0, currArea = 0, length = 0, breadth = 0, start = 0,
        end = height.size() - 1;
    while (start < end)
    {
        length = end - start;
        breadth = min(height[start],
                      height[end]); // breadth is minheight of border
        currArea = length * breadth;
        maxArea = max(maxArea, currArea);
        if (height[start] <= height[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return maxArea;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << "Maximum Area is : " << maxArea(height);
    return 0;
}