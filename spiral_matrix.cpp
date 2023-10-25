#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    int n = matrix.size();
    int m = matrix[0].size();
    int start_row = 0;
    int end_row = n - 1;
    int start_col = 0;
    int end_col = m - 1;
    while (start_row <= end_row && start_col <= end_col)
    {
        // Print start row
        for (int col = start_col; col <= end_col; col++)
        {
            cout << matrix[start_row][col] << " ";
        }
        start_row++;
        // Print end column
        for (int row = start_row; row <= end_row; row++)
        {
            cout << matrix[row][end_col] << " ";
        }
        end_col--;
        // Print end row
        for (int col = end_col; col >= start_col; col--)
        {
            cout << matrix[end_row][col] << " ";
        }
        end_row--;
        // Print start column
        for (int row = end_row; row >= start_row; row--)
        {
            cout << matrix[row][start_col] << " ";
        }
        start_col++;
    }
    return 0;
}