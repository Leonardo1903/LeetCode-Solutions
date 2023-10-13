#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int nonZero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZero] = nums[i];
            nonZero++;
        }
    }
    for (int i = nonZero; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
