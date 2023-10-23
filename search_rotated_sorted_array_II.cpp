#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            cout << "true" << endl;
            return 0;
        }
        if ((nums[start] == nums[mid]) && (nums[end] == nums[mid]))
        {
            start++;
            end--;
        }

        else if (nums[start] <= nums[mid])
        {
            if ((nums[start] <= target) && (nums[mid] > target))
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if ((nums[mid] < target) && (nums[end] >= target))
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return 0;
}