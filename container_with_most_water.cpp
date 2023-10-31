#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int left = 0, right = height.size() - 1;
    int maxArea = 0;
    while (left < right)
    {
        int currentArea = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, currentArea);
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    cout << maxArea << endl;
    return 0;
}