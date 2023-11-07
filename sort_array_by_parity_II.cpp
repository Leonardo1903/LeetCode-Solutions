#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 2, 5, 7};
    int n = nums.size();
    int even = 0, odd = 1;
    while (even < n && odd < n)
    {
        if (nums[even] % 2 == 0)
        {
            even += 2;
        }
        if (nums[odd] % 2 == 1)
        {
            odd += 2;
        }
        else
        {
            swap(nums[even], nums[odd]);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}