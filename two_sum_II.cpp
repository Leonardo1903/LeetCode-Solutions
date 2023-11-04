#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        if (nums[start] + nums[end] == target)
        {
            cout << start + 1 << " " << end + 1 << endl;
            break;
        }
        else if (nums[start] + nums[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}