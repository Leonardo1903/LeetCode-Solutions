#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, 2, 4};
    int j = nums.size() - 1;
    for (int i = 0; i < j;)
    {
        if ((nums[i] & 1) == 1 && (nums[j] & 1) == 0)
        {
            swap(nums[i], nums[j]);
            i++, j--;
        }
        else
        {
            if ((nums[i] & 1) == 0)
                i++;
            if ((nums[j] & 1) == 1)
                j--;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}