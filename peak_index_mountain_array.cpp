#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int n = nums.size();
    int s = 0, e = n - 1;
    while (s < e)
    {
        int m = s + (e - s) / 2;
        if (nums[m] > nums[m + 1])
        {
            e = m;
        }
        else
        {
            s = m + 1;
        }
    }
    cout << s << endl;
    return 0;
}
