#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int val = 2;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
    }
    for (int i = 0; i < index; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}