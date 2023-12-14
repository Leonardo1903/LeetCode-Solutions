#include <iostream>
#include <vector>
using namespace std;

int endingPos(vector<int> &nums, int target)
{
    int l = 0, h = nums.size() - 1, mid, ans = -1;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return ans;
}

int startingPos(vector<int> &nums, int target)
{
    int l = 0, h = nums.size() - 1, mid, ans = -1;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            h = mid - 1;
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 7, 8, 9};
    int target = 5;
    int start = startingPos(nums, target);
    int end = endingPos(nums, target);
    cout << start << " " << end << endl;
    return 0;
}