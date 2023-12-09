#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> &candidates, int target, int i, vector<vector<int>> &ans, vector<int> &output)
{
    if (target == 0)
    {
        ans.push_back(output);
        return;
    }

    int prev = -1;
    for (int j = i; j < candidates.size(); j++)
    {
        if (candidates[j] != prev && candidates[j] <= target)
        {
            output.push_back(candidates[j]);
            solve(candidates, target - candidates[j], j + 1, ans, output);
            output.pop_back();
            prev = candidates[j];
        }
    }
}

int main()
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> output;
    int i = 0;
    solve(candidates, target, i, ans, output);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
