#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int nonZero = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[nonZero], nums[j]);
            nonZero++;
        }
    }
    return 0;
}
