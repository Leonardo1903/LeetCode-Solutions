#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> subs = {{}};
    vector<int> nums = {1, 2, 3};
    for (int num : nums)
    {
        int n = subs.size();
        for (int i = 0; i < n; i++)
        {
            subs.push_back(subs[i]);
            subs.back().push_back(num);
        }
    }
    for (auto sub : subs)
    {
        for (auto num : sub)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}