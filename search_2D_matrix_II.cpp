#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 5;
    int row = matrix.size(), col = matrix[0].size();
    int rowIndex = 0, colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if (element == target)
        {
            cout << "Found at " << rowIndex << " " << colIndex << endl;
            return 0;
        }
        else if (element < target)
            rowIndex++;
        else
            colIndex--;
    }
    return 0;
}