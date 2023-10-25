#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 4;
    vector<vector<int>> generateMatrix(n);
    vector<vector<int>> m(n, vector<int>(n, 0));
    int left = 0, top = 0, right = n - 1, bottom = n - 1;
    int count = 1;
    while (left <= right && top <= bottom)
    {
        for (int col = left; col <= right; col++)
        {
            m[top][col] = count++;
        }
        top++;
        for (int row = top; row <= bottom; row++)
        {
            m[row][right] = count++;
        }
        right--;
        for (int col = right; col >= left; col--)
        {
            m[bottom][col] = count++;
        }
        bottom--;
        for (int row = bottom; row >= top; row--)
        {
            m[row][left] = count++;
        }
        left++;
    }
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}