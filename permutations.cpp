#include <iostream>
#include <vector>
using namespace std;

void permutations(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        permutations(index + 1, nums, ans);
        swap(nums[index], nums[i]);
    }
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    permutations(0, nums, ans);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}