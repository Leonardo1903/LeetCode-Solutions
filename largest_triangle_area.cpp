#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> points = {{0, 0}, {0, 1}, {1, 0}, {0, 2}, {2, 0}};
    double maxarea = INT_MIN;
    double area = 0;
    int i, j, k;
    double x1, x2, y1, y2, x3, y3;
    int n = points.size();
    for (i = 0; i < n; i++)
    {
        x1 = points[i][0];
        y1 = points[i][1];
        for (j = i + 1; j < n; j++)
        {
            x2 = points[j][0];
            y2 = points[j][1];
            for (k = j + 1; k < n; k++)
            {
                x2 = points[j][0];
                y2 = points[j][1];
                for (k = j + 1; k < n; k++)
                {
                    x3 = points[k][0];
                    y3 = points[k][1];
                    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
                    if (area > maxarea)
                    {
                        maxarea = area;
                    }
                }
            }
        }
        cout << maxarea;
        return 0;
    }
}
