#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }
    for (int i = 0; i <= j; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}