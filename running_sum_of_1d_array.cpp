#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}