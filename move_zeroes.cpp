#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int n = nums.size();
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            nums[j] = nums[i];
            i++;
        }
    }
    return 0;
}
