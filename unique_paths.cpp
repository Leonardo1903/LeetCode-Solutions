#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 7;
    vector<vector<int>> test(m, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        test[0][i] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        test[i][0] = 1;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            test[i][j] = test[i][j - 1] + test[i - 1][j];
        }
    }
    cout << test[m - 1][n - 1] << endl;
    return 0;
}