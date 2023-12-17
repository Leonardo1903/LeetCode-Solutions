#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 9};
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int total = (n + 1) * (n + 2) / 2;
    cout << total - sum << endl;
    return 0;
}