#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    if (count <= 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}