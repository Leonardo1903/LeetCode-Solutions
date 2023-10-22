#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int n = nums.size();
    int i = 1, j = 1, count = 1;
    while (i < n)
    {
        if (nums[i] == nums[i - 1])
        {
            if (count < 2)
            {
                count++;
                nums[j++] = nums[i];
            }
        }
        else
        {
            count = 1;
            nums[j++] = nums[i];
        }
        i++;
    }
    for (int i = 0; i < j; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}