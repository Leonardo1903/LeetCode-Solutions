#include <iostream>
#include <vector>
using namespace std;

void findcombination(int ind, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int> temp)
{
    if (ind == candidates.size())
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }
    if (candidates[ind] <= target)
    {
        temp.push_back(candidates[ind]);
        findcombination(ind, target - candidates[ind], candidates, ans, temp);
        temp.pop_back();
    }
    findcombination(ind + 1, target, candidates, ans, temp);
}
int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> temp;
    findcombination(0, target, candidates, ans, temp);
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