#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    int n = nums.size();
    k = k % n;
    // Reverse the first n - k elements
    int start = 0;
    int end = n - k - 1;
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    // Reverse the last k elements
    start = n - k;
    end = n - 1;
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    // Reverse the entire array
    start = 0;
    end = n - 1;
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}