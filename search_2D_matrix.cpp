#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int start = 0, end = matrix.size() * matrix[0].size() - 1;
    int n = matrix[0].size();
    int target = 3;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (matrix[mid / n][mid % n] == target)
        {
            cout << "Found at " << mid / n << " " << mid % n << endl;
            return 0;
        }
        else if (matrix[mid / n][mid % n] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}