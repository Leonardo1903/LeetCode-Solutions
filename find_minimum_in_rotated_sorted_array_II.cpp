#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 2, 0, 1};
    int low = 0;
    int high = nums.size() - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] < nums[high])
        {
            high = mid;
        }
        else if (nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else
        {
            high -= 1;
        }
    }
    cout << nums[low] << endl;
    return 0;
}