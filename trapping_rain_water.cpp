#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int left = 0, right = height.size(), leftMax = INT_MIN, rightMax = INT_MIN, ans = 0;
    while (left < right)
    {
        leftMax = max(leftMax, height[left]);
        rightMax = max(rightMax, height[right]);
        ans += (leftMax < rightMax) ? leftMax - height[left++] : rightMax - height[right--];
    }
    cout << ans << endl;

    return 0;
}