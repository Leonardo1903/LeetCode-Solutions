#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    if (numRows == 0)
        return {};
    if (numRows == 1)
        return {{1}};
    vector<vector<int>> prevRows = generate(numRows - 1);
    vector<int> newRow(numRows, 1);
    for (int i = 1; i <= numRows - 2; i++)
    {
        newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
    }
    prevRows.push_back(newRow);
    return prevRows;
}

int main()
{
    int numRows = 5;
    vector<vector<int>> rows = generate(numRows);
    for (int i = 0; i < rows.size(); i++)
    {
        for (int j = 0; j < rows[i].size(); j++)
        {
            cout << rows[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}