#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 1};
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    cout << ans << endl;
    return 0;
}
