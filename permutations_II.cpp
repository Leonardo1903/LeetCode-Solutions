#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> temp;
    set<vector<int>> st;
    for (int i = 0; i < nums.size(); i++)
        temp.push_back(nums[i]);
    do
    {
        next_permutation(temp.begin(), temp.end());
        st.insert(temp);
    } while (temp != nums);
    vector<vector<int>> ans;
    for (auto i : st)
        ans.push_back(i);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}