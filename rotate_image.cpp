#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    vector<vector<int>> nmatrix(rowSize, vector<int>(colSize));
    int n = rowSize;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            nmatrix[i][j] = matrix[n - 1][i];
            n--;
        }
        n = rowSize;
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            matrix[i][j] = nmatrix[i][j];
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}