#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subset(int index, vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int n)
{
    ans.push_back(ds);

    for (int i = index; i < n; ++i)
    {
        if (i > index && nums[i] == nums[i - 1])
        {
            continue;
        }
        ds.push_back(nums[i]);
        subset(i + 1, ds, nums, ans, n);
        ds.pop_back();
    }
}

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans;
    vector<int> ds;
    sort(nums.begin(), nums.end());
    subset(0, ds, nums, ans, nums.size());
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}