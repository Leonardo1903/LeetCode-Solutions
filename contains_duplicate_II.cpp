#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(nums[i]) != map.end() && abs(map[nums[i]] - i) <= k)
        {
            cout << "true" << endl;
            return 0;
        }
        map[nums[i]] = i;
    }
    cout << "false" << endl;
    return 0;
}